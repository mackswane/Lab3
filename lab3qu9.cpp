# Lab3
//ques 9
#include <iostream>

using namespace std;

int main()
{
  char ch;
    cout << "\nenter any character  :";
    cin>>ch;
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
      cout<<"\ncharacter is an alphabet";
    else
    if(ch>=48&&ch<=57)
    cout<<"\ncharacter is a digit";
    else cout<<"\ncharacter is a special character";
    return 0;
}

