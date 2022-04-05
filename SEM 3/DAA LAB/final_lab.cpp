#include<bits/stdc++.h>
using namespace std;
int abs(int a,int b)
{
    if(a>b)
        return a-b;
    else if(a=b)
        return 0;
    else
        return -(a-b);
}
void solution(int a[],int n,int k)
{
    int b[n][n]={{0},{0}};
    int d=0;
    int temp=a[d];
    while(d<n)
    {
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(abs(temp,a[i]<=k)
                {
                    b[i][j]==a[i];
                    j++;
                }
        }
        d++;
    }
    for(int i=0;i<n;i++)
    {
        for(int z=0;z<n;z++)
        {
            cout<<b[i][z]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array :"
    cin>>n;
    cout<<"\n Enter the difference :"
    int k;
    cin>>k;
    int a[n];
    cout<<"\n Enter the elements";
    for(in i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solution(a,n,k);
}
