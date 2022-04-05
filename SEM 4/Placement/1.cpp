#include <iostream>
using namespace std;
int f(int &x,int c)
{
    c=c-1;
    cout<<x<<" "<<c<<endl;
    if(c==0) return 1;
    x=x+1;
    cout<<x<<" "<<c<<endl;
    return f(x,c)*x;
}
int main() {
    // Write C++ code here
    int f1=5,f2=5,ans=0;
    ans=f(f1,f2);
    cout<<ans;

    return 0;
}
