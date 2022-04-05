
sum=0;
for n=2:1:50
    flag=0;
    for i=2:1:n/2
        if rem(n,i)==0
            flag=1; 
            break;
        end    
    end
    if flag==1
            sum=sum+n;
    end
end
sum