import socket
import threading
import sys
PORT=8000

# setting up the server
try:
    server=socket.socket()
    server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    server.bind(('',PORT))
    print("Socket binded..")
except Exception as e:
    print(e)
    sys.exit(2)

def proxy_server(webserver,port,conn,data,addr):
    try:
        server=socket.socket()
        server.connect((webserver,port))
        server.send(data.encode())

        while True:
            reply = server.recv(8192)

            if reply:
                conn.send(reply)
                # print(reply)

                dar=float(len(reply))
                dar=float(dar/1024)
                dar = "{}.3s".format(dar)
                print(f"[*] Request done : {addr[0]} => {dar} <= {webserver}")
            else:
                break

        server.close()
        conn.close()
    except (socket.error, (value,msg)):
        server.close()
        conn.close()
        sys.exit(1)


def handle_client(conn,addr,data):
    try:
        first_line=data.split("\n")[0]
        url = first_line.split(" ")[1]

        http_pos = url.find("://")
        # print(f"This is the first line {first_line}\n,This is the url {url}]n,THis is the http positrion {http_pos}")

        if http_pos == -1:
            temp = url
        else:
            temp = url[(http_pos+3)]
            # print(f"Temp is the else part {temp}")

        port_pos = temp.find(":")

        webserver_pos=temp.find('/')

        if webserver_pos == -1:
            webserver_pos = len(temp)
        webserver=""
        port=-1

        if port_pos == -1 or webserver_pos<port_pos:
            port=80
            webserver = temp[:webserver_pos]
        else:
            port=int(temp[(port_pos+1):] [:webserver_pos-port_pos-1])
            webserver=temp[:port_pos]

        print(webserver)
        proxy_server(webserver,port,conn,data,addr)

    except Exception as e:
        print(e)



def start():
    server.listen()
    print(f"server is listening on {PORT}")

    while True:
        try:
            conn, addr = server.accept()
            data=conn.recv(8192).decode()
            # print(f"this is the DATA {data}")
            thread = threading.Thread(target=handle_client, args=(conn, addr, data))
            thread.start()
            print(f"active connectiuons = {threading.active_count() - 1}")
        except KeyboardInterrupt:
            server.close()
            print("Shutting Down..")
            sys.exit(1)

print("Server is starting...")
start()