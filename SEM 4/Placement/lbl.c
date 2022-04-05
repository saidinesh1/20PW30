#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE* fp;
    int i=0;
    char ch[100];
    fp=fopen("lblf.txt","r");
    int count=0;
    int a=0;
    while(!feof(fp))
    {
        char c=fgetc(fp);
        printf("%c",c);
        ch[a]=c;
        a++;
    }
    printf("\n %s",ch);
    fclose(fp);
    return 0;
}
