# Lab3
//ques 45
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,hcf;
    cout<<"\nEnter 1st positive integers: ";
    cin>>n1;
    cout<<"\nEnter 2nd positive integers: ";
    cin>>n2;
    for(i=1;i<=n1&&i<=n2;++i)
       {
       if(n1%i==0&&n2%i==0)
          hcf=i;
       }
    cout<<"\nHCF of "<<n1<<" and "<<n2<<" is "<<hcf;
    return 0;
}
