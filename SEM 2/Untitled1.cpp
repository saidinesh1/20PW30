#include<iostream>
using namespace std;
class Matrix1D
{
    private:
        int a[3];
    public:
        Matrix();
        Matrix(int[])
        void Display();
}
Matrix1D ::Matrix()
{
    a[3]={0,0,0}
}
Matrix1D ::Matrix(int a[])
{
    for(int i=0;i<3;i++)
        this a[i]=a[i];
}
void Display()
{
    for(int i=0;i<3;i++)
        cout<<a[i];
}
int main()
{
    Matrix1D m1(1,2,3),m2(0,0,0),m3;
    m1.Display;
    return 0;
}
