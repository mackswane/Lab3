# Lab3
//question4
#include <iostream>

using namespace std;

int main()
{
int a;
    cout << "\nenter a no.=";
    cin>>a;
    if((a%5==0)&&(a%11==0))
      {cout<<"\nyour no. is divisible by 5 and 11";}
        else cout<<"\nyour no. is not divisible by 5 and 11";
    return 0;
}
