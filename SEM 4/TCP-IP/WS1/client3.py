import socket
s=socket.socket()
ip=socket.gethostname()
port=12345
s.connect((ip,port))

while True:
    client_msg=input("Enter the message to be sent: ")
    s.send(bytes(client_msg,'utf-8'))    
    host_msg=s.recv(1024).decode()
    print("Message from Server: ",host_msg)
    choice=input("Do you want to continue: ")
    s.send(bytes(choice,'utf-8'))    
    if choice in ['N','n']:
        break
s.close()