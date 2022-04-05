#include<iostream>
#include<stdio.h>
using namespace std;
class Time
{
    private:
    int hr,min,sec;
    public:
    Time();
    Time(int,int,int);
    void display();
    Time operator+(Time);
    bool operator<(Time);
};
Time::Time()
{
    hr=min=sec=0;
}
Time::Time(int a,int b,int c)
{
    hr=a;
    min=b;
    sec=c;
}
void Time::display()
{
    printf("%d hr : %d min : %d sec ",hr,min,sec);
}
Time Time::operator+(Time t)
{
    int a,b;
    Time t1;
    a=sec+t.sec;
    t1.sec=a%60;
    b=(a/60)+min+t.min;
    t1.min=b%60;
    t1.hr=(b/60)+hr+t.hr;
    t1.hr=t.hr%24;
    return t1;
}
bool Time::operator<(Time t)
{

    if(t.hr>hr)
        return 1;
    else if((t.hr==hr)&&t.min>min)
        return 1;
    else if((t.hr==hr)&&(t.min==min)&&(t.sec>sec))
        return 1;
    else
        return 0;
}
int main()
{

    Time t1(11,45,33),t2(11,45,33),t3,t4;
    t1.display();
    cout<<endl;
    t2.display();
    cout<<endl;
    t3=t1+t2;
    t3.display();
    cout<<endl;
    bool a=t1<t2;
    cout<<a;
    cout<<&t1;
}
