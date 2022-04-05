#include<iostream>
#include"Model.h"
using namespace std;
 Point::Point()
{
    x=y=0;
}
Point::Point(int x,int y)
{
    this->x=x;
    this->y=y;
}
bool Point::isorigin()
{
    if(x==0 && y==0)
        return true;
    else
        return false;
}
Point Point::add(Point p,Point q)
{
    this->x=p.x+q.x;
    this->y=p.y+q.y;
    cout<<"("<<x<<","<<y<<")";
}
Point Point::sub(point p,point q)
{

}
