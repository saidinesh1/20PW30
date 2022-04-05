#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,comp,comptcf,b;
    double cf;
    int a[5][3]={{3,4,6},{4,5,7},{3,4,6},{7,10,15},{5,7,10}};

    for(int i=0;i<5;i++)
    {
        if(i==0)
            cout<<"External inputs : "<<endl;
        else if(i==1)
            cout<<"External outputs : "<<endl;
        else if(i==2)
            cout<<"External inquiries : "<<endl;
        else if(i==3)
            cout<<"External files : "<<endl;
        else
            cout<<"internal files : "<<endl;
        cin>>num;
        l1:
        cout<<"Complexity"<<endl;
        cout<<"1. Simple"<<endl;
        cout<<"2. Average"<<endl;
        cout<<"3. Complex"<<endl;
        cin>>comp;
        if(comp>3 || comp<1)
        {
            cout<<"Wrong input! Try again"<<endl;
            goto l1;
        }
        sum=sum+(num*(a[i][comp-1]));
    }
    for(int i=0;i<14;i++)
    {
        if(i==0)
            cout<<"Reliable and backup recovery "<<endl;
        else if(i==1)
            cout<<"Data Communications"<<endl;
        else if(i==2)
            cout<<"Distributed functions"<<endl;
        else if(i==3)
            cout<<"Performance"<<endl;
        else if(i==4)
            cout<<"Heavily used configuration"<<endl;
        else if(i==5)
            cout<<"Online Data entry"<<endl;
        else if(i==6)
            cout<<"Operational Ease"<<endl;
        else if(i==7)
            cout<<"Online Update"<<endl;
        else if(i==8)
            cout<<"Complex interface"<<endl;
        else if(i==9)
            cout<<"Complex processing"<<endl;
        else if(i==10)
            cout<<"Reusability"<<endl;
        else if(i==11)
            cout<<"Installation ease"<<endl;
        else if(i==12)
            cout<<"Multiple Sites"<<endl;
        else if(i==13)
            cout<<"Facilitate change"<<endl;
        cout<<"1.Irrelevant:"<<endl;
        cout<<"2.Average:"<<endl;
        cout<<"3.Essential:"<<endl;
        cin>>comptcf;
        if(comptcf==2)
            cf=cf+3;
        else if(comptcf==3)
            cf=cf+5;
    }
    cf=(0.65+(0.01*cf));
    cout<<"The UFC = "<<sum<<endl;
    cout<<"The TCF = "<<cf<<endl;
    cout<<"The FP  = "<<double(sum*cf)<<endl;
    cout<<"Months Required to complete = "<<double((sum*cf*2)/30)<<" Months "<<endl;
    return 0;
}
