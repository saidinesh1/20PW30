import socket
s = socket.socket()
host = socket.gethostname()
port = 12345
s.bind((host, port))
s.listen(5)

while True:
    c, addr = s.accept()   
    print ('Got connection from', addr)
    y = c.recv(100).decode()
    res = ' '.join(format(ord(i), '08b') for i in y)
    c.send(bytes(res,'utf-8'))
c.close()
