#include <iostream>
using namespace std;
class sample
{
private:
int var;
public:
void input()
{
cout<<var;
}
void output()
{
cout<<"Variable entered is ";
cout<<var<<"\n";
}
};
int main()
{
sample object;
object.input();
object.output();
object.var();
return0;
}
