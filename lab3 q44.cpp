# Lab3
//ques 44
#include<iostream>
using namespace std;
int main()
{
 int n,f=1;
 cout<<"\n enter any number =";
 cin>>n;

 while(n>0)
    {
    f=f*n;
    n=n-1;

    }
    cout<<"\nfactorial="<<f;
 return 0;
}
