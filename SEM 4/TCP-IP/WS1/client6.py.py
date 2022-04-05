import socket
import pickle as p
s=socket.socket()
port=38000
host=socket.gethostname()
s.connect((host,port))

fv=p.loads(s.recv(1024))
print(fv)
s.close()
