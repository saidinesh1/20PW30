import socket
import pickle as p
s=socket.socket()
host=socket.gethostname()
port=38000

d={1:'2',2:'3',3:'4'}

s.bind((host,port))


s.listen(1)


c,a=s.accept()

vr=p.dumps(d)
c.send(vr)
   
c.close()
