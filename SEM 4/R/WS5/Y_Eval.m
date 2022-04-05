function [Y]=Y_Eval(x)
Y=-0.2.*x.^4+exp(-0.5.*x).*x.^3+7.*x.^2;
plot(x,Y)
end