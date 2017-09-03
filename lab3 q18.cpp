# Lab3
//ques 18
#include <iostream>

using namespace std;

int main()
{
  float sp,cp,p,l;
    cout << "\nenter cost price :";
    cin>>cp;
    cout << "\nenter selling price  :";
    cin>>sp;
    if(sp>cp)
      {p=sp-cp;
      cout<<"\nprofit ="<<p;
      }
      else
      if(cp>sp)
        {l=cp-sp;
        cout<<"\nloss= "<<l;
        }
        else cout<<"\n no loss or profit";
    return 0;
}
