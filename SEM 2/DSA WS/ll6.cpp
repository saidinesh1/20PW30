#include<iostream>
using namespace std;


class node
{
    public:
        char data;
        node *link;
}*start,*ptr;
int main()
{
    node *n1=new node();
    node *n2=new node();
    node *n3=new node();
    node *n4=new node();
    node *n5=new node();
    n1->data='R';
    n1->link=n2;
    n2->data='A';
    n2->link=n3;
    n3->data='D';
    n3->link=n4;
    n4->data='A';
    n4->link=n5;
    n5->data='R';
    n5->link=NULL;
    start=n1;
    ptr=start;
    char* a[10];
    int i=0;
    while(ptr!=NULL)
    {
        *a[i]=ptr->data;
        i++;
        ptr=ptr->link;
        cout<<*a[i];
    }
    ptr=start;
    int k=0;
        for(int j=i;j>=0;j++)
            {
                if(*a[j]==ptr->data && ptr!=NULL)
                {
                    ptr=ptr->link;
                    k++;
                }
                else
                {
                    break;
                }
            }
    if(k>0)
    cout<<"The linked list is palindrome";
    else
    cout<<"The linked list is not palindrome";
    return 0;

}





































































































































