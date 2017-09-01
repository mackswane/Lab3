# Lab3
//question2
#include <iostream>

using namespace std;

int main()
{
int a,b,c;
    cout << "\nenter 1st no.=";
    cin>>a;
    cout<<"\nenter 2nd no.=";
    cin>>b;
    cout<<"\nenter 3rd no.=";
    cin>>c;
    if(a>b&&a>c)
      {
      cout<<"\n"<<a<<" is greater than"<<b<<"and"<<c;
      }
      else
      if(b>a&&b>c)
      {
      cout<<"\n"<<b<<" is greater than"<<a<<"and"<<c;
      }
      else{cout<<"\n"<<c<<" is greater than"<<a<<"and"<<b;}
    return 0;
}
