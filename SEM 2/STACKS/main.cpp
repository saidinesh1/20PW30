#include<iostream>
#include"stack.h"
using namespace std;
int main()
{
    Stack stk;
    int choice,n,temp;
    do
    {
        cout<<"1-Exit"<<"\n";
        cout<<"2-Push"<<"\n";
        cout<<"3-pop"<<"\n";
        cout<<"4-Display"<<"\n";
        cout<<"5-Clear Stack"<<"\n";
        cout<<"Enter your choice"<<"\n";
        cin>>choice;
    switch(choice)
    {
        case 1:
            break;
        case 2:
            cout<<"Enter the element to be pushed";
            cin>>n;
            temp=stk.push(n);
            if(temp==0)
                cout<<"The stack is full";
            else
                 cout<<"The element  is inserted";
            break;
        case 3:
            temp=stk.pop();
            if(temp==0)
                    cout<<"STACK IS EMPTY."<<endl;
            else
                    cout<<temp<<" is removed (popped)."<<endl;
            break;
        case 4:
            stk.display();
            break;
        case 5:
            stk.clearstack();
            cout<<"STACK CLEARED"<<"\n";
        deafult:
            cout<<"INVALID CHOICE";
    }
    }while(choice!=0);
    return 0;
}

