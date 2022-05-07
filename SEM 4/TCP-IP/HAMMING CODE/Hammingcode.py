#inputs and initial 
dataBits=input("enter the data bits:")
dataBits=list(reversed(dataBits))
print(f"the data to be encoded is (now reversed) {dataBits}")

#redundant bits
rBits=list()
r=0

#finding the redundant bits
while ((len(dataBits)+r+1)>(pow(2,r))):
    rBits.append(str(2**r))
    r+=1

#hamming code to be filled in the list    
hamming=list()

print(f"The redundant bits are {rBits}")


#redundant bit assignment based on parity
def parity_check(p):
    tot=0
    i=p-1
    while(i<len(int_hamming)):
        tot+=sum(int_hamming[i:i+p])
        i+=(p+p)
    
    return tot%2

#printing the hamming code in the interger list
def print_hamming_code(h_code):
    print("The hamming code generated is:")
    for i in h_code:
        print(i,end='')

#generating initial hamming code with 0s at every Redundant bit  
 
k=0 
for i in range(0,len(dataBits)+r):
    if str(i+1) in rBits:
        hamming.append('0')
    else:
        hamming.append(str(dataBits[k]))
        k+=1

#converting hamming code to integer
int_hamming=list()
for i in hamming:
    int_hamming.append(int(i))

# print(f"the integer list of INITIAL NON REVERSED hamming code is {int_hamming}")

str_hamming=list(reversed(hamming))
str_hamming="".join(str_hamming)
print(f"the hamming code with all 0s in the redundant bits] is:{str_hamming}\n")

# giving proper values to the redundant bits [was 0s in all place initially]
for i in rBits:
    int_hamming[int(i)-1]=parity_check(int(i))

#   final hamming code
int_hamming=list(reversed(int_hamming))
print_hamming_code(int_hamming)