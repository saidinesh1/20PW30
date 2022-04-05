#include<stdio.h>
int main()
{
    const int a=5;
    int *ptr=&a;
    *ptr=7;
    printf("%d",*ptr);
}
