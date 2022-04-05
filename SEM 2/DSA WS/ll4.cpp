#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *link;
}*start,*ptr,*ref;
int main()
{
   node *n1=new node();
   node *n2=new node();
   node *n3=new node();
   node *n4=new node();
   node *n5=new node();
   node *n6=new node();
   node *n7=new node();
    n1->data=3;
    n1->link=n2;
    n2->data=6;
    n2->link=n3;
    n3->data=7;
    n3->link=n4;
    n4->data=8;
    n4->link=n5;
    n5->data=9;
    n5->link=n6;
    n6->data=10;
    n6->link=n7;
    n7->data=11;
    n7->link=NULL;
    start=n1;
    int n;
    cin>>n;
    ref=start;
    while(ref!=NULL  )
    {
        ptr=ref;
        while(ptr!=NULL )
        {
            if(((ref->data)+(ptr->data))==n)
            {
            cout<<ref->data<<" "<<ptr->data<<endl;
            break;
            }
            else
            ptr=ptr->link;
        }
        ref=ref->link;
    }
    return 0;
}
