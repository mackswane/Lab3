# Lab3
//ques 31
#include<iostream>
using namespace std;
int main()
{
 int n,i=0;
cout<<"\nenter the number:";
 cin>>n;
 while(n!=0){
      n=n/10;
      i++;
 }
 cout<<"no. of digit ="<<i;
 return 0;
}
