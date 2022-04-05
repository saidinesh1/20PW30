import socket
s=socket.socket()
ip=socket.gethostname()
port=12345
s.connect((ip,port))
msg=input("Enter the message to the server: ")
s.send(bytes(msg,'utf-8'))    
host_msg=s.recv(1024).decode()
print("Server message: ",host_msg)
s.close()