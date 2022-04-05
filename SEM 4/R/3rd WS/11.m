x=linspace(1,10);
y=x.^2;
y1=x.^3;
y2=log(x)
y3=1./x
subplot(2,2,1);
plot(x,y);
title('subplot:x^2')
subplot(2,2,2);
plot(x,y1)
title('subplot:x^3')
subplot(2,2,3)
plot(x,y2)
title('subplot:log(x)')
subplot(2,2,4);
plot(x,y3);
title('subplot:1/x')

