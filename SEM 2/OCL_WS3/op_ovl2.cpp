#include<iostream>
using namespace std;
class Set
{
    int *a,n ;
    public:
    Set();
    Set(int );
    void add(int );
    void remove(int );
    void display();
    Set operator|(Set );
};
Set ::Set(){};
Set::Set(int n)
{
    int *b =new int [n];
}
void Set::add(int x)
{
    n=x;
    a=new int[x];
    cout<<"Enter the elements";
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
}
void Set::display()
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;

}
void Set::remove(int y)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]==y )
       {
           for(int j=i;j<n;j++)
                a[j]=a[j+1];
                a[--n];
       }
    }
}
Set Set::operator | (Set u)
{
    Set z;
    for(int i=0;i<)
}
int main()
{
    Set s1,s2;
    s1.add(5);
    //s2.add(5);
    s1.remove(3);
    s1.display();
    return 0;
}

