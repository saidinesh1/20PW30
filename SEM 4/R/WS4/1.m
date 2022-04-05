t=linspace(0,30)
x=(4-0.1.*t).*sin(0.8.*t)
y=(4-0.1.*t).*cos(0.8.*t)
z=0.4*sqrt(t.^3);
plot3(x,y,z)