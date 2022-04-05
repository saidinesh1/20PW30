function y=primecheck(x)
i=2;
flag=0;
while i<=sqrt(x)
    if rem(x,i)==0
        flag=1;
        break;
    end
    i=i+1;
end
if flag==0
    disp("Prime");
elseif flag==1
    disp("Not prime");
end