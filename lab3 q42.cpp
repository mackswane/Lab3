# Lab3
//ques 42
#include<iostream>
using namespace std;
int main()
{
 int n,p,i,c=1;
 cout<<"\n enter any number =";
 cin>>n;
 cout<<"\n enter power of no. ";
 cin>>p;
 for(i=0;i<p;i++)
    {
    c=c*n;
    }
cout<<"\n"<<c;
 return 0;
}
