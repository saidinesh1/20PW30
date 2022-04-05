#include<iostream>
using namespace std;
class Base {
public:
 Base(int a) : member(a)
 {
 cout << "Base constructor called with " << a << endl;
 }
private:
int member;
};

void test(Base obj1)
{
 cout << "Base object's member = " << obj1.member;
}

int main()
{
 test(333);
}
