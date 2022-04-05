#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include<iostream>
using namespace std;
class Point
{
    private :
        int x,y;
    public  :
        Point();
        Point(int,int);
        void isorigin();
        float Distance(Point,Point);
        Point Multiply(int,Point);
        int Add(Point,Point);
        int sub(Point,Point);
        int CheckQuadrant(Point);
};


#endif // POINT_H_INCLUDED
