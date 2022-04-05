import socket
s=socket.socket()
ip=socket.gethostname()
port=12345
s.connect((ip,port))
while True:
    s.send(b"Please send the time")
    ans=s.recv(1024).decode()
    print("Server replied the time as ",ans)
s.close()