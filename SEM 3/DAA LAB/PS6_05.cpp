#include<bits/stdc++.h>
using namespace std;
void maxactivities(int s[],int f[],int n)
{
    int i=0;
    cout<<" "<<i;
    for(int j=0;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<j;
            i=j;
        }
    }
}

int main()
{
    int s[]={10, 12, 20};
    int f[]={20, 25, 30};
    int n=3;
    maxactivities(s,f,n);
    return 0;
}
