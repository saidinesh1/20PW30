#include<iostream>
#include"Country.h"
using namespace std;
Country::Country()
{

}
Country::Country(int n);
{
    c=new int[n];
}
void Country::get_info()
{
    cout<<"Enter the country name"<<" ";
    cin>>name;
    cout<<"Enter the country area"<<" ";
    cin>>area;
    cout<<"Enter the country population"<<" ";
    cin>>population;
}
Country Country::bigger_area(country c[])
{
    int max=c[0].area;
    for(int i=0;i<n;i++)
    {
        if(c[i].area>max)
            max=c[i].area;
    }

}
Country Country::bigger_population(country c[])
{
    int max=c[0].population;
    for(int i=0;i<n;i++)
    {
        if(c[i].population>max)
            max=c[i].population;
    }

}
