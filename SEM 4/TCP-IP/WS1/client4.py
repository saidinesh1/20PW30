import socket
s = socket.socket()
host = socket.gethostname()
port = 12345
print(host)
s.connect((host, port))

while(1):
    inpt=input("Enter input: ")
    s.send(bytes(inpt, 'utf-8'))
    host_msg=s.recv(1024).decode()
    print("Binary form of string : "+host_msg)
s.close()