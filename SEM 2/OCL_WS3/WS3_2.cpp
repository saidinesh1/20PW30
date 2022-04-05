#include<iostream>
using namespace std;
class empty{};
int main()
{
    empty a,b;
    if(&a==&b)              //The output of this snippet is possible . two distinct objects cannot have same memory location.
    cout<<"Impossible";     //That's why it returned the else part.
    else
    cout<<"Possible";
    return 0;
}
