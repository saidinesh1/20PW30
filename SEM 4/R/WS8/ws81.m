syms x n;
f=x+x^2;
a0=1/pi*int(f,0,2*pi)
an=simplify(1/pi*int(f*cos(n*x),0,2*pi))
bn=simplify(1/pi*int(f*sin(n*x),0,2*pi))