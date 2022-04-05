function [AREA]=triangle(a,b,c)
    s=(a+b+c)/2;
    AREA=sqrt(s*(s-a)*(s-b)*(s-c));
    disp(AREA)
end