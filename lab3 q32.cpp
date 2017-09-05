# Lab3
//ques 32
#include<iostream>
using namespace std;
int main()
{
 int n,i;
cout<<"\nenter the number:";
 cin>>n;
 i=n%10;
 while(n>10){
      n=n/10;
 }
 cout<<"\n1st digit ="<<n;
 cout<<"\nlast digit ="<<i;
 return 0;
}
