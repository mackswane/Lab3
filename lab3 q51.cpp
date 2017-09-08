# Lab3
//ques 51
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,f,d,sum=0;
    cout << "\nenter any number :";
    cin>>n;
    f=n;
    while(n!=0)
         {
         d=n%10;
         sum=sum+pow(d,3);
         n=n/10;
         }
    cout<<"\nsum="<<sum;
    if(sum==f)
      cout<<"\narmstrong no.";
    else
    cout<<"\nnot armstrong ";

    return 0;
}
