#include"point.h"
#include<iostream>
using namespace std;
Mypoint::Mypoint()
{
    x=y=0;
}
Mypoint::Mypoint(int x,int y)
{

    this->x=x;
    this->y=y;
}
bool Mypoint::Isorigin()
{
    if(x==0 && y==0)
    return true;
    else
    return false;
}

