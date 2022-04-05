syms t
f=t*exp(-2*t)*cos(3*t);
%fplot(f)
fplot(laplace(f))