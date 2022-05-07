syms x n;
l=pi;
a0=1/l*(int(pi/2,x,0,pi/2)+int(pi-x,x,pi/2,pi))
an=1/l*(int(pi/2*cos(n*pi*x/l),x,0,pi/2)+int((pi-x)*cos(n*pi*x/l),x,pi/2,pi))
bn=1/l*(int(pi/2*sin(n*pi*x/l),x,0,pi/2)+int((pi-x)*sin(n*pi*x/l),x,pi/2,pi))