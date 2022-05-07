import socket
s=socket.socket()
ip="NSL-39"
print(ip)
port=12345
s.connect((ip,port))
while True:
    msg="Absishek punda"
    s.send(bytes(msg,"UTF-8"))
s.close()