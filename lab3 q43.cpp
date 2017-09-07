# Lab3
//ques 43
#include<iostream>
using namespace std;
int main()
{
 int n,i;
 cout<<"\n enter any number =";
 cin>>n;
 cout<<"\nfactors of"<<n<<"=";
 for(i=1;i<=n;i++)
    {
    if(n%i==0)
      cout<<i<<",";

    }
 return 0;
}
