#include<iostream>
#include"stack.h"
using namespace std;
Stack::Stack()
{

    top=-1;
}
bool Stack::isfull()
{
    if (top>=(size-1))
        return true;
    else
        return false;
}
bool Stack::isempty()
{
    if (top==-1)
        return true;
    else
        return false;
}
int Stack::push(int a)
{
    if(isfull())
        cout<<"STACK OVERLFOW";
    else
    {
        ++top;
        stack[top]=a;
        return a;
    }
}
int Stack::pop()
{
    int temp=0;
    if(isempty())
        cout<<"STACK UNDERFLOW";
    else
    {
        temp=stack[top];
        --top;
        return temp;
    }
}
int Stack::display()
    {
        if(isempty())
            cout<<"The stack is empty"<<"\n";
        else
        cout<<"The stack is"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<"\n";
        }
        cout<<endl;
    }
void Stack::clearstack()
    {
        int a[size];
        for(int i=0,j=top;i<=size,j>=0;i++,j--)
        {
            a[i]=stack[top];
            top=top-1;
        }
    }
