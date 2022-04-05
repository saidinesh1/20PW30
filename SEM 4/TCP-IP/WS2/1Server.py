import socket
s=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
amount=0
balance=0
ip=socket.gethostname()
port=12345
s.bind(('localhost',port))
balance=0
while True:
    y=s.recvfrom(1024)
    req=y[0].decode()
    Cip=y[1]
    print("server is connected with : ",Cip)
    if (req=='D' or req=='d'):
        amount=s.recvfrom(1024)
        balance+=int(amount[0].decode())
        s.sendto(bytes("Amount deposited","utf-8"),Cip)
    elif(req=='W' or req=='w'):
        amount=s.recvfrom(1024)
        if int(amount[0].decode())>balance:
            s.sendto(bytes("Not enough fund","utf-8"),Cip)
        else:
            balance-=int(amount[0].decode())
            s.sendto(bytes("Amount withdrawn","utf-8"),Cip)
    elif(req=='B' or req=='b'):
        s.sendto(bytes(str(balance),"utf-8"),Cip)
s.close()