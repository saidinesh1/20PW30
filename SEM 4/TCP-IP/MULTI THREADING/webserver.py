from socket import *
serverPort=12345
serverSocket = socket(AF_INET, SOCK_STREAM)
serverSocket.bind(("10.1.66.89", serverPort))
serverSocket.listen(1)
print ('the web server is up on port:', serverPort)
while True:
	print ('Ready to serve...')
	connectionSocket, addr =serverSocket.accept() 
	try:
		message =connectionSocket.recv(1024) 
		filename = message.split()[1]
		f = open(filename[1:])
		outputdata =f.read()
		print (outputdata)
		connectionSocket.send('\nHTTP/1.1 200 OK\n\n'.encode())
		for i in range(0, len(outputdata)):
			connectionSocket.send(outputdata[i].encode())
		connectionSocket.send("\r\n".encode())
		connectionSocket.close()
	except IOError:
		connectionSocket.send("\nHTTP/1.1 404 Not Found\n\n".encode())
		connectionSocket.close()
serverSocket.close()