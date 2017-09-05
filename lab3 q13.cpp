# Lab3
//ques 13
#include<iostream>
using namespace std;
int main()
{
int amt,th,f,h,fif,t,ten,fiv,two,one;
cout<<"\nenter the amount in rupees";
cin>>amt;

th=amt/2000;
amt=amt-th*2000;

f=amt/500;
amt=amt-f*500;

h=amt/100;
amt=amt-h*100;

fif=amt/50;
amt=amt-fif*50;

t=amt/20;
amt=amt-t*20;

ten=amt/10;
amt=amt-ten*10;

fiv=amt/5;
amt=amt-fiv*5;

two=amt/2;
amt=amt-two*2;

one=amt/1;

cout<<"\nthe given amount has\n "<<th<<" of "<<"2000\n "
    <<f<<" of "<<"500 \n "<<h<<" of "<<"100\n"
    <<fif<<" of "<<"50\n"<<t<<" of "<<"20\n"
    <<ten<<" of "<<"10 \n"<<fiv<<" of "<<"5 \n"
    <<two<<" of "<<"2 \n"<<one<<" of "<<"1 ";
return 0;
}
