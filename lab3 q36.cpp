# Lab3
//ques 36
#include<iostream>
using namespace std;
int main()
{
 int n,i,sum=1;
 cout<<"\nenter the number:";
 cin>>n;
 i=n%10;
 while(n!=0){
      i=n%10;
      sum=sum*i;
      n=n/10;

 }
 cout<<"\n sum="<<sum;
 return 0;
}
