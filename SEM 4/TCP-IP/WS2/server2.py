import socket

s=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
s.bind((socket.gethostname(),9999))

print("Server waiting")
f=open("abcd.txt","ab")

data,addre=s.recvfrom(1024)
while data:
    f.write(data)
    data,addre=s.recvfrom(1024)
f.close()
s.close()