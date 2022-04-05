import socket
s=socket.socket()
port=12345
ip=socket.gethostname()
s.bind((ip,port))
s.listen(5)

while True:
    c,addr=s.accept()
    choice='Y'
    while (choice not in ['N','n']):
        client_msg=c.recv(1024).decode()
        c.send(bytes(client_msg,'utf-8'))
        choice=c.recv(100).decode()
c.close()