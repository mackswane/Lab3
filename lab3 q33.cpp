# Lab3
//ques 33
#include<iostream>
using namespace std;
int main()
{
 int n,i,sum;
cout<<"\nenter the number:";
 cin>>n;
 i=n%10;
 while(n>10){
      n=n/10;
 }
 cout<<"\n1st digit ="<<n;
 cout<<"\nlast digit ="<<i;
 sum=n+i;
 cout<<"\n sum="<<sum;
 return 0;
}
