include 'emu8086.inc'
.MODEL SMALL
.STACK 100H
data segment 
    
string db "PSG college of technology$"


code segment 

 
start:
    mov ax,@data
    mov ds,ax
    mov si,offset string
    mov cx,26
    
mov bx,0    
occurrence:
    
            
    mov dl,[si]
    cmp dl,99
    je count:
    inc si
    cmp dl,36
    jz over
    count:
    inc bx
    inc si
    loop occurrence
    
    over:
    
  
    
endp occurrence       