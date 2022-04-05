#include<iostream>
using namespace std;
int main()
{
    const int a=5;
    int *ptr=&a;
    *ptr=7;
    cout<<*ptr;
}
