i=1;
sum=0;
while i<=9999
    sum=sum+(i^2);
    i=i+4;
end
j=3;
while j<=9999
    sum=sum-(j^2);
    j=j+4;
end
disp(sum)