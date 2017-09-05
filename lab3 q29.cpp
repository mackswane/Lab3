# Lab3
//ques 29
#include<iostream>
using namespace std;
int main()
{
 int n,sum=0,i=1;
 cout<<"\nenter the number upto which the sum of odd no. is to find:";
 cin>>n;
 while(i<=n){
      if(i%2==1)
        sum=sum+i;
      i++;
 }
 cout<<"\n sum="<<sum;
 return 0;
}
