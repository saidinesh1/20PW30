#include<bits/stdc++.h>
using namespace std;
#define r 2
#define c 4
/*int max_index(int a[r][c])
{
    int maxind=0;
    int curr_col=c-1;
    for(int i=0;i<r;i++)
    {
        while(curr_col>=0 && a[i][curr_col]==1)
        {
            curr_col=curr_col-1;
            maxind=i;
        }
    }
    return maxind+1;
}
*/
int max_index(int a[r][c])
{
    int b[r];
    int max_ind=0;
    int priority=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(a[i][j]==1)
            {

            }

        }



    }
}
int main()
{

    int a[r][c]={{0,1,0,1},{1,0,1,0}};
    cout<<max_index(a);
    return 0;
}
