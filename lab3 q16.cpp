# Lab3
//ques 16
#include <iostream>

using namespace std;

int main()
{
  float a,b,c,sum;
    cout << "\nenter 1st side of triangle  :";
    cin>>a;
    cout << "\nenter 2nd side of triangle  :";
    cin>>b;
    cout << "\nenter 3rd side of triangle  :";
    cin>>c;
    if(a==b==c)
    cout<<"\ntriangle is an equilateral triangle";
    else
    if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&c!=b))
    cout<<"\ntriangle is an isosceles triangle";
    else
    if(a!=b&&b!=c&&c!=a)
    cout<<"\ntriangle is an scalene triangle";
    return 0;
}
