#include<bits/stdc++.h>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
    fstream fp,fa;
    string s1,s2;
    vector<string> seq;
    fp.open("Text.txt",ios::in);
    fa.open("test2.txt",ios::out);
    while(!fp.eof())
    {
        fp>>s1;
        seq.push_back(s1);
    }
    sort(seq.begin(),seq.end());
    for(int i=0;i<seq.size();i++)
    {
        cout<<seq[i]<<" ";
        fa<<seq[i]<<" ";
    }
}
