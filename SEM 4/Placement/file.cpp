#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fp;
    fp.open("file.txt",ios::out);
    fp<<"hello world";
    fp.close();
    fp.open("file.txt",ios::in);
    char ch;
    while(!fp.eof())
    {
        fp>>ch;
        cout<<ch;
    }
}
