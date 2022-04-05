
import socket
s=socket.socket()
ip=socket.gethostname()
port=12345
s.bind((ip,port))
s.listen(5)

def stuff(s):
    #stuffing
    ss=""
    for i in s.split(' '):
        if i =="ESC":
            ss+="ESC ESC "
        elif i=="FLAG":
            ss+="ESC FLAG "
        else:
            ss+=i+" "
    bs=""
    for i in ss.split():
        if i=="ESC":
            bs+='10100011 '
        elif i=="FLAG":
            bs+='01111110 '
        elif ord(i)>=65 and ord(i)<=90:
            bs+=format(int(bin(ord(i))[2:]),'#0008')+" "
    bs=bs.strip(' ')
    for i in bs.split():
        if '11111' in i:
            bs=bs.replace('11111','111110')    
    #unstuffing
    uts=""
    for i in bs.split():
        if '111110' in i:
            bs=bs.replace('111110','11111')
    for i in bs.split():
        if i=="10100011":
            uts+="ESC "
        elif i=="01111110":
            uts+="FLAG "
        else:
            uts+=chr(int(i,2))+' '        
    uts=uts.replace('ESC ESC','ESC')
    uts=uts.replace('ESC FLAG','FLAG')

while True:
    c,addr=s.accept()
    client_msg=c.recv(4096).decode()
    print("Message from client: ",client_msg)
    c.send(bytes(client_msg,'utf-8'))
c.close()