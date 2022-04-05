#include<stdio.h>
int main()
{
    int a=5;
    int &p=a;
    printf("%d %d",&p,&a);
    return 0;
}
