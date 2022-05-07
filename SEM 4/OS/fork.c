#include<stdio.h>
#include<unistd.h>
#incl
int main()
{
    int a=fork();
    printf("Pid of child process : %d",a);
    return 0;
}
