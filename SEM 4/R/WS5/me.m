function s=me(x1,x2)
disp("1.Addition")
disp("2.Subtraction")
disp("3.Multiplication")
disp("4.Division")
prompt="Enter a number"
x=input(prompt)
if x==1
    disp(x1+x2)
elseif x==2
    disp(x1-x2)
elseif x==3
    disp(x1*x2)
elseif x==4
    disp(x1/x2)
end