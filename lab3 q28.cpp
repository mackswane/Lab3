# Lab3
//ques 28
#include<iostream>
using namespace std;
int main()
{
 int n,sum=0,i=1;
 cout<<"\nenter the number upto which the sum 0f even no. is to find:";
 cin>>n;
 while(i<=n){
      if(i%2==0)
        sum=sum+i;
      i++;
 }
 cout<<"\n sum="<<sum;
 return 0;
}
