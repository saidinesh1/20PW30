import socket

clientSocket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

msgeToServer = input("Enter your message to server")

clientSocket.sendto((msgeToServer+'2').encode(), ('localhost', 12345))

msgeFromServer = clientSocket.recvfrom(1024)
print('Message from server', msgeFromServer[0].decode())