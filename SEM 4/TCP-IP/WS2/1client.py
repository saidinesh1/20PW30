import socket
c=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
Adress=('localhost',12345)
amount=0
op='Y'
while op=='Y' or op=='y':
    msg=input("Enter W or w from withdrawl,D or d for deposit,B or b for balance check")
    c.sendto(bytes(msg,"utf-8"),Adress)
    if msg=='W' or msg=='w':
        amount=input("Enter the to be withdrawn : ")
        c.sendto(bytes(amount,"utf-8"),Adress)
        servermsg=c.recvfrom(1024)
        print(servermsg[0].decode())
    elif msg=='D' or msg=='d':
        amount=input("Enter the to be deposited : ")
        c.sendto(bytes(amount,"utf-8"),Adress)
        servermsg=c.recvfrom(1024)
        print(servermsg[0].decode())
    elif msg=='B' or msg=='b':
        servermsg=c.recvfrom(1024)
        print(servermsg[0].decode())
op=input("Do you want to continue: ")