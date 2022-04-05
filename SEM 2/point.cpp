#include<iostream>
#include<math.h>
#include"point.h"
using namespace std;
Point ::Point()
{
    x=y=0;
}


Point::Point(int x,int y)
{
    this->x=x;
    this->y=y;
}
void Point::isorigin()
{
    if(x==0&&y==0)
        cout<<"The given point is origin";
}
