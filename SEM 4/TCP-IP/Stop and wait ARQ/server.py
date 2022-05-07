import socket
s=socket.socket()
ip=socket.gethostname()
port=12346
s.bind((ip,port))
s.listen(5)
while True:
    c,addr=s.accept()
    print("Got connection from ",addr)
    msg="hello"
    c.send(bytes(msg,"UTF-8"))
    ms=c.recv(4096).decode()
    print(ms)
s.close()
    