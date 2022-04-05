import socket


c=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
serverAddr=((socket.gethostname(),9999))
f=open("abcd.txt","rb")
data=f.read(1024)
while data:
    c.sendto(data,serverAddr)
    data=f.read(1024)
c.sendto(data,serverAddr)
f.close()
c.close()