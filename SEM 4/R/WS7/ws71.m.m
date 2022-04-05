syms t
a=cos(t)^2+2*exp(-3*t)-7;
b=exp(3*t)*cosh(2*t);
c=sinh(t)*cos(3*t);
d=(t+1)^2*exp(3*t);
laplace(a)
laplace(b)
laplace(c)
laplace(d)