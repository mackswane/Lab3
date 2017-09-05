# Lab3
//ques 20
#include<iostream>
using namespace std;
int main()
 {
  float sal,gs,hra,da;
  cout<<"\nenter basic salary =";
  cin>>sal;
  if(sal<=10000)
    {
     hra=(sal*20)/100;
     da=(sal*80)/100;
     gs=sal+hra+da;
    }
  else
  if(sal>10000&&sal<=20000)
    {
     hra=(sal*25)/100;
     da=(sal*90)/100;
     gs=sal+hra+da;
    }
  else
    {
     hra=(sal*30)/100;
     da=(sal*95)/100;
     gs=sal+hra+da;
    }
    cout<<"\nyour gross salary is "<<gs;
  return 0;
}
