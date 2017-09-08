# Lab3
//ques 46
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,minm;
    cout<<"\nEnter 1st positive integers: ";
    cin>>n1;
    cout<<"\nEnter 2nd positive integers: ";
    cin>>n2;
    if(n1>n2)
       minm=n2;
    else
       minm=n1;
    while(1)
         {
         if( minm%n1==0 && minm%n2==0 )
           {
            cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<minm;
            break;
           }
         ++minm;
    }
    return 0;
}
