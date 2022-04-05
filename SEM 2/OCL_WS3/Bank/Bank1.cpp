#include<iostream>
using namespace std;
#include"Bank.h"
int main()
{
    Bank b1,b2,b3;
    int n,a,b,c;
    do
    {
        cout<<"Enter your action"<<endl;
        cout<<"1.Deposit"<<endl;
        cout<<"2.Withdraw"<<endl;
        cout<<"3.Check balance"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"Enter how much you wish to deposit"<<endl;
                cin>>a;
                b1.add(a);
                break;
            case 2:
                cout<<"Enter how much you wish to withdraw"<<endl;
                cin>>b;
                b2.withdraw(b);
                break;
            case 3:
                b3.balance_check();
                break;
            default:
                cout<<"Wrong input"<<endl;
        }
    }while(n!=0);
    return 0;
}
