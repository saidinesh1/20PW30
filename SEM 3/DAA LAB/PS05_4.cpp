#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int r)
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
void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int pos=partition(a,l,r);
        quicksort(a,l,pos-1);
        quicksort(a,pos+1,r);
    }
}
int search(int A[],int X,int l,int r)
{
    if(r>=l)
    {
        int m=(l+r)/2;
        if(A[m]==X)
            return m;
        if(A[m]>X)
            return search(A,X,l,m-1);
        if(A[m]<X)
            return search(A,X,m+1,r);
    }
    return -1;
}
int main()
{
    int n,X,pos,i=0;
    cin >> n >> X;
    int A[n];
    for(i=0; i<n; i++)
        cin >> A[i];
    quicksort(A,0,n-1);
    for(i=1; 1; i++)
    {
        pos = search(A,X+i,0,n-1);
        if(pos == -1)
            break;
    }
    cout << X+i;
}
