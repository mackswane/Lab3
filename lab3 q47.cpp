# Lab3
//ques 47
#include<iostream>
using namespace std;
int main()
{
 int n,i,t=0;
 cout<<"\n enter a positive  number =";
 cin>>n;
 if(n==1)
  {
  t=1;
  }
 else
 for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
        t=1;
        break;

    }
 if(t==0)
 cout<<"\n prime no.";
 else
 cout<<"\n not prime";
 return 0;
}
