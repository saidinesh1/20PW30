age=25;
amt=5000;
while amt<=1000000
    amt=5000+amt+0.09*amt;
    age=age+1;
end
disp(age)