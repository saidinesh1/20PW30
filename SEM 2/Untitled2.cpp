#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node *link;
};
int main()
{

    node *head=NULL;
    node *second=NULL;
    node *third=NULL;
    head=new node();
    second=new node();
    third=new node();
    head->data=5;
    head->link=second;
    second->data=6;
    second->link=third;
    third->data=7;
    third->link=NULL;
    cout<<head->data;
    cout<<head->link;
    return 0;
 }
