# Lab3
//ques  27
#include<iostream>
using namespace std;
int main()
{
 int n,sum=0,i=1;
 cout<<"\nenter the number upto which the sum is to find:";
 cin>>n;
 while(i<=n){
      sum=sum+i;
      i++;
 }
 cout<<"\n sum="<<sum;
 return 0;
}
