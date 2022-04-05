#include<iostream>
using namespace std;
class Matrix1D
{
    private:
        int *a;
        int n;
    public:
        Matrix1D();
        Matrix1D(int [],int );
        void Display(int[]);
};
Matrix1D ::Matrix1D()
{
    a=0;
}
Matrix1D ::Matrix1D(int b[],int c)
{
    n=c;
    a = new int[n];
    for(int i=0;i<n;i++)
        a[i]=b[i];

}
void Matrix1D::Display(int a[])
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{

    int a[]={1,2,3,4};
    Matrix1D m1,m2(a,4),m3;
    m2.Display(a);
}
