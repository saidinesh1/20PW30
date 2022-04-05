function [A,STD]=AvgSd(x)
A=0;
Cv=0;
STD=0;
for i=x
    A=A+i;
    Cv=Cv+1;
end
A=A/Cv;
for i=x
    STD=(STD+(A-i)^2);
end
STD=sqrt(STD/Cv);
end
