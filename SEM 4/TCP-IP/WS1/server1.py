import socket
s = socket.socket()
host = socket.gethostname()
port = 12345
s.bind((host,port))
s.listen(5)

while True:
    c,addr = s.accept()
    print('Got connection from: ',addr)
    while True:
        y=c.recv(100).decode()
        print(y)
        if y=='Bye':
            c.send(b'Goodbye')
        else:
            c.send(b'OK')
c.close()
