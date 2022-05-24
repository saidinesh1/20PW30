# -*- coding: utf-8 -*-
"""
Spyder Editor
author - 20pw30
This is a temporary script file.
"""
import math

#IP DATAGRAM FRAGMENTING

#given
DATAGRAM_SIZE=1800
MTU_ETH=1500
MTU_WAN=572
HEADER=20

#fragmenting function
def fragment(no_packets,MTU,HEADER,DATAGRAM_SIZE):
    packets=[]
    sent_bits=0
    for i in range(0,no_packets):
        
        if(i!=no_packets-1):
             packets.append(MTU-HEADER)
             sent_bits+=MTU-HEADER
        else:
            packets.append(DATAGRAM_SIZE-sent_bits)
    
    return packets
    
#ethernet frags
no_packets=math.ceil(DATAGRAM_SIZE/MTU_ETH)
eth_frags=fragment(no_packets,MTU_ETH,HEADER,DATAGRAM_SIZE)
print(eth_frags)

#wan frags
wan_frags=[]
for i in eth_frags:
    if(i>MTU_WAN):
        temp=fragment(math.ceil(i/MTU_WAN),MTU_WAN,HEADER,i)
        for j in temp:
            wan_frags.append(j)
    else:
        wan_frags.append(i)
        
print(wan_frags)

#mf, offset
mf=[]
offset=[]

for i in range(0,len(wan_frags)):
    if i==len(wan_frags)-1:
        mf.append(0)
    else:
        mf.append(1)
        
for i in range(0,len(wan_frags)):
    if i==0:
        offset.append(0)
    else:
        offset.append(sum(wan_frags[0:i])/8)
        
print(f"THe MF IS {mf}\noffset is {offset}.")