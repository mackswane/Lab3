# Lab3
//ques 37
#include<iostream>
using namespace std;
int main()
{
 int n,i,r=0;
 cout<<"\nenter the number:";
 cin>>n;

 while(n!=0){
      i=n%10;
      r=r*10+i;
      n=n/10;

 }
 cout<<"\n reverse no. ="<<r;
 return 0;
}
