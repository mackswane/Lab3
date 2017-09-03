# Lab3
//ques 15
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

    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    cout<<"\ntriangle is valid";
    else cout<<"\ntriangle is not valid";
    return 0;
}
