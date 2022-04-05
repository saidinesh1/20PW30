import socket
s=socket.socket()
ip=socket.gethostname()
port=12345
s.connect((ip,port))

while True:
    msg=input("Enter the message to the server: ")
    s.send(bytes(msg,'utf-8'))    
    y=s.recv(1024).decode()
    print("Server replied ",y)
    if y=='Goodbye':
        break
s.close()