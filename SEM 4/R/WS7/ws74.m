syms s
f=s^2/(s^2+16)^2;
%fplot(f)
fplot(ilaplace(f))
