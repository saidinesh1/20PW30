from datetime import date
today=str(date.today())
import socket
s=socket.socket()
ip=socket.gethostname()
port=12345
s.bind((ip,port))
s.listen(5)
while True:
    c,addr=s.accept()
    y=(c.recv(1024).decode()) 
    print(y)
    c.send(bytes(today,'utf-8'))
c.close()