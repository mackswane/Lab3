# Lab3
//ques 38
#include<iostream>
using namespace std;
int main()
{
 int n,i,r=0,c;
 cout<<"\nenter the number:";
 cin>>n;
 c=n;
 while(n!=0){
      i=n%10;
      r=r*10+i;
      n=n/10;

 }
 if(c==r)
   cout<<"\n palindrome";
 else
   cout<<"\n not palindrome";
 return 0;
}
