syms x n k t;
l=pi;
a0=1/l*(int(1+x/pi,x,-pi,0)+int(1-x/pi,0,pi));
an=1/l*(int((1+(x/pi))*cos(n*pi*x/l),x,-pi,0)+int((1-(x/pi))*cos(n*pi*x/l),0,pi));
bn=1/l*(int((1+(x/pi))*sin(n*pi*x/l),-pi,0)+int((1-(x/pi))*sin(n*pi*x/l),0,pi));
exp=[a0/2,subs(an*cos(n*pi*x/l)+bn*sin(n*pi*x/l),n,[1 2 3 4])];
f=(1+(x/pi))*(heaviside(x+pi)-heaviside(x-0))+(1-(x/pi))*(heaviside(x-0)-heaviside(x-pi));
 fplot(f,[-pi pi]);
% fplot(sum(exp),[-pi pi])


