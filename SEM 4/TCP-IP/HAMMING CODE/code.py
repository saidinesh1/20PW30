
def calRedBits(m):
    for i in range(m):
        if(2**i>=m+i+1):
            return i
        
def PosRedBits(data,r):
    j=0;
    k=1;
    m=len(data)
    codeword=''
    for i in range(1,m+r+1):
        if i==2**j:
            codeword+='0'
            j+=1
        else: 
            codeword=codeword+data[-1*k]
            k=k+1
    return codeword[::-1]


        
posarr=[]
redarr=[]
for i in range(3):
   redarr.append(2**i)
arr=[x for x in range(0,)]
for i in redarr:
    a=i
    lst=[]
    count=0
    for j in range(a,8,1):
        if count!=i:
            lst.append()
            count+=1
    
    posarr.append(lst)    
    

    
print(redarr)
print(posarr)
    
        
        
        
'''       
data=input("Enter the data")
redbits=calRedBits(len(data))
codeword=PosRedBits(data,redbits)
print(codeword)'''