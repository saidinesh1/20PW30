#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int b[],int l,int r,int k)
{
    int i=l,j=r,p=a[l];
    while(i<j)
    {
        while(a[i]<p)
        {
            i++;
        }
        while(a[j]>p)
        {
            j--;
        }
        if(i<j)
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    int t=a[j];
    a[j]=p;
    p=t;
    int count;
    for(int z=j+1;z<=r;z++)
    {
        count++;
    }
    int q=0;
    if(count==k)
    {
        b[q]=a[j];
        q++;
    }
    return j;
}
void quicksort(int a[],int b[],int l,int r,int k)
{
    int count=0;
    if(l<r)
    {
        int pos=partition(a,b,l,r,k);
        quicksort(a,b,l,pos-1,k);
        quicksort(a,b,pos+1,r,k);
    }

}
int main()
{
    int n,k,i=0;
    cin >> n >> k;
    int A[n],b[]={0};
    for(i=0; i<n; i++)
        cin >> A[i];
    quicksort(A,b,0,n-1,k);
    int sum=0;
    for(int h=0;h<n;h++)
    {
        sum+=b[h];
    }
    cout<<sum;
}
