#include"Bank.h"
#include<iostream>
using namespace std;
Bank::Bank(){balance=0;}
float Bank::balance_check()
{
    cout<<"$"<<balance;
}
float Bank::add(int a)
{
    balance+=a;
}
float Bank::withdraw(int a)
{
    if(a<balance)
    {
       cout<<"Please collect your money"<<" "<<endl;
       balance-=a;
    }
    else
    {
        cout<<"No sufficient balance"<<" "<<endl;
        cout<<"Penalty of 5$";
        balance-=5;
    }
}
