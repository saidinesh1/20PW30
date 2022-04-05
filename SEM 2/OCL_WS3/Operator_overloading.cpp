#include<iostream>
using namespace std;
class Time
{
    private:
    int hr,min,sec;
    public:
    Time();
    Time(int,int,int)
    void display();
    Time operator +(Time);
};
Time(){hr=min=sec=0);
