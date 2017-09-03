# Lab3
//ques 17
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  float a,b,c,r1,r2,d;
    cout << "\nenter coefficient of x^2 :";
    cin>>a;
    cout << "\nenter coefficient of x  :";
    cin>>b;
    cout << "\nenter the constant part  :";
    cin>>c;
    d=b*b-4*a*c;
    cout<<"\nd="<<d;
    if(d>0)
      {
      cout<<"\nequation has real and distinct roots";
      r1=(-b+sqrt(d))/(2*a);
       cout<<"\n1st root is r1="<<r1;
      r2=((-b-sqrt(d))/(2*a));
      cout<<"\n2nd root is r2="<<r2;
      }
      else
      if(d==0)
      {
      cout<<"\nequation has real and equal roots";
      r1=(-b+sqrt(d))/(2*a);
       cout<<"\n1st root is r1="<<r1;
      r2=(-b-sqrt(d))/(2*a);
      cout<<"\n2nd root is r2="<<r2;
      }
      else
      if(d<0)
        {cout<<"\nequation has no real roots";}
    return 0;
}
