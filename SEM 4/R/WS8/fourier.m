%  syms x n l;
% L=3;
% a0=2/L*(int(x^2,0,3));
% an=2/L*(int(x^2*cos(n*pi*x/L),0,3));
% bn=2/L*(int(x^2*sin(n*pi*x/L),0,3));
% halfCosine=[a0/2,subs(an*cos(n*x*pi/L),n,[1 2 3 4])]
% halfSine=[subs(bn*sin(n*x*pi/L),n,[1 2 3 4 5])]



% L=pi;
% a0=2/L*(int(x,x,0,pi/2)+int(pi/2,x,pi/2,pi));
% an=2/L*(int((x)*cos(n*pi*x/L),0,pi/2)+int((pi/2)*cos(n*pi*x/L),pi/2,pi));
% bn=2/L*(int((x)*sin(n*pi*x/L),0,pi/2)+int((pi/2)*sin(n*pi*x/L),pi/2,pi));
% halfCosine=[a0/2,subs(an*cos(n*x*pi/L),n,[1 2 3 4])];
% halfSine=[subs(bn*sin(n*x*pi/L),n,[1 2 3 4 5])];
% fplot(sum(halfCosine),[0 pi])

% syms x L n;
% L=pi;
% a0=2/L*(int(x,x,0,pi/2)+int(pi-x,x,pi/2,pi));
% an=2/L*(int((x)*cos(n*pi*x/L),0,pi/2)+int((pi-x)*cos(n*pi*x/L),pi/2,pi));
% bn=2/L*(int((x)*sin(n*pi*x/L),0,pi/2)+int((pi-x)*sin(n*pi*x/L),pi/2,pi));
% halfCosine=[a0/2,subs(an*cos(n*x*pi/L),n,[1 2 3 4])];
% halfSine=[subs(bn*sin(n*x*pi/L),n,[1 2 3 4 5])];
% % fplot(sum(halfCosine),[0 pi]);
% f=piecewise(0<x<pi/2,x,pi/2<x<pi,pi-x);
% fplot(f)

L=4;
a0=2/L*(int(0,x,0,2)+int(1,x,2,4));
an=2/L*(int((0)*cos(n*pi*x/L),x,0,2)+int(1*cos(n*pi*x/L),2,4));
bn=2/L*(int((0)*sin(n*pi*x/L),x,0,2)+int(2*sin(n*pi*x/L),2,4));
halfCosine=[a0/2,subs(an*cos(n*x*pi/L),n,[1 2 3 4])];
halfSine=[subs(bn*sin(n*x*pi/L),n,[1 2 3 4 5])];
fplot(sum(halfCosine),[0 4]);
f=piecewise(0<x<2,0,2<x<4,1);
fplot(f)
