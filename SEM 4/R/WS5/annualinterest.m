v=[];
sum=1000;
i=1;
while i<=30
    v(i)=sum;
    sum=sum+0.08*sum;
    i=i+1;
end
x=1:30;
plot(x,v)