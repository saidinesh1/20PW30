syms y(x)
ode=diff(y,x,2)==2+x;
sol=dsolve(ode)