
from socket import *
serverSocket=socket(AF_INET,SOCK_STREAM)
serverPort=12345
serverSocket.bind(('',serverPort))
serverSocket.listen(1)
print("The web server is up on the port",serverPort)
while True:
    print("Ready to serve...")
    connectionSocket,addr=serverSocket.accept()
    try:
        message=connectionSocket.recv(1024)
        filename=message.split()[1]
        f=open(filename[1:])
        outputdata=f.read()
        print(outputdata)
        connectionSocket.send('\nHTTP/1.1 200 OK\n\n'.encode())
        for i in range(0,len(outputdata)):
            connectionSocket.send(outputdata[i].encode())
        connectionSocket.send("\r\n".encode())
        connectionSocket.close()
    except IOError:
        connectionSocket.send("\nHTTP/1.1 404 Not Found\n\n".endcode())
        connectionSocket.close()
serverSocket.close()