# Lab3
//ques14
#include <iostream>

using namespace std;

int main()
{
  float a,b,c,sum;
    cout << "\nenter 1st angle of triangle  :";
    cin>>a;
    cout << "\nenter 2nd angle of triangle  :";
    cin>>b;
    cout << "\nenter 3rd angle of triangle  :";
    cin>>c;
    sum=a+b+c;
    if(sum==180)
    cout<<"\ntriangle is valid";
    else cout<<"\ntriangle is not valid";
    return 0;
}
