#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* ptr;
    char ch[60];
    ptr=fopen("para.txt","r");
    if(fgets(ch,60,ptr)!=-1)
       {
           puts(ch);
       }

    return 0;
}
