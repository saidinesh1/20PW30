#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int r,int k)
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
    return j;
}
int quicksort(int a[],int l,int r,int k)
{
    int count=0;
    if(l<r)
    {
        int pos=partition(a,l,r,k);
        if(r-pos==k)
            count += a[pos];
        count+=quicksort(a,l,pos-1,k);
        count+=quicksort(a,pos+1,r,k);
    }
    return count;
}
int main()
{
    int n,k,i=0;
    cin >> n >> k;
    int A[n];
    for(i=0; i<n; i++)
        cin >> A[i];
    cout<<quicksort(A,0,n-1,k)<<endl;
    for(i=0; i<n; i++)
        cout<<A[i]<<" ";


}
