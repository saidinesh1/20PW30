#include<iostream>
using namespace std;
class Matrix1D
{
    private:
        int a[3];
    public:
        Matrix1D();
        Matrix1D(int[]);
        void Display(int[]);
};
Matrix1D ::Matrix1D()
{
    int a[3]={0,0,0};
}
Matrix1D ::Matrix1D(int b[])
{
    for(int i=0;i<3;i++)
        a[i]=b[i];
}
void Matrix1D::Display(int a[])
{
    for(int i=0;i<3;i++)
        cout<<a[i]<<" ";
}
int main()
{

    int a[3]={};
    Matrix1D m1,m2,m3;
    m1.Display(a);
}
