# Lab3
//ques 10
#include <iostream>

using namespace std;

int main()
{
  char ch;
    cout << "\nenter a character  :";
    cin>>ch;
    if(ch>=65&&ch<=90)
      cout<<"\ncharacter is an uppercase alphabet";
    else
    if(ch>=97&&ch<=122)
    cout<<"\ncharacter is a lowercase alphabet";
    else cout<<"\ncharacter is not an alphabet";
    return 0;
}
