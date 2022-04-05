#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    vector<int> w;
    fstream fp;
    string a;
    int flg=0;
    int count1[1000]={1};
    fp.open("CP.txt",ios::in);
    while(!fp.eof())
    {
        fp>>a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                count1[flg]++;
            }
        }
        flg++;
    }

    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            if(count1[i]<count1[j])
            {
                int temp=count1[j];
                count1[j]=count1[i];
                count1[i]=temp;
            }
        }
    }
    cout<<"Minimum Occurrence: "<<count1[0];
    cout<<"Maximum occurrence: "<<count1[999];
}
