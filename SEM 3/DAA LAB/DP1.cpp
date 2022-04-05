#include<bits/stdc++.h>
#include<cstring>
using namespace  std;
string printSubStr(string s,int a,int b)
{
    string str="";
    for(int i=a-1;i<=b;i++)
    {
        str+=s[i];
    }
    return str;
}
int longestPalSubstr(string str)
{
    int n = str.size();

    int maxLength = 1, start = 0;

    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 1;


            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;


            if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    cout << "Longest palindrome substring is: ";
    cout<<printSubStr(str, start+1, start + maxLength);


    return maxLength;
}
int main()
{
    string s="MalayalaM";
    int ans=longestPalSubstr(s);
    cout<<ans;
    return 0;
}
