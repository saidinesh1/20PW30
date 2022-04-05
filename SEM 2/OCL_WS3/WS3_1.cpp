#include<iostream>
using namespace std;
class empty{};
int main()
{                            //The output for this snippet is 1 .Empty classes cannot have zero memory.//
                            //This makes two distinct objects to have same memory location which is not possible.//
    cout<<sizeof(empty);    //generally the size of an empty class is 1 byte//
    return 0;
}
