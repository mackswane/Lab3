# Lab3
//ques 21
#include<iostream>
using namespace std;
int main()
{
 float euc,bill,tb,suc;
 cout<<"\nenter the unit of electricity used :";
 cin>>euc;

 if(euc<=50)
   {
    bill=euc*0.50;
   }
 else if(euc>50&&euc<=150)
   {
    bill=euc*0.75;
   }
 else if(euc>150&&euc<=250)
   {
    bill=euc*1.20;
   }
 else
   bill=euc*1.50;
   suc=bill*0.2;
   tb=bill+suc;
   cout<<"\nyour total bill is "<<tb;
return 0;
}
