import socket
import threading

serverSocket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
print("Server socket created")

serverSocket.bind(('localhost', 12345))

def handle_client():
    connected = True
    while connected:
        msge, addr = serverSocket.recvfrom(1024)
        print(addr)
        m = msge.decode()
        print("Message from Client"+m[len(m)-1]+":"+m[0:len(m)-1])
        #replyToClient = input("Enter your reply to client"+m[len(m)-1]+":")
        serverSocket.sendto(msge[0:len(msge)-1], addr)
        
def start():
    while(True):
        thread = threading.Thread(target = handle_client())
        thread.start()       
start()



