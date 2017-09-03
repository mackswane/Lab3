# Lab3
//ques7
#include <iostream>

using namespace std;

int main()
{
  char ch;
    cout << "\nenter a character :";
    cin>>ch;
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
      cout<<"\ncharacter entered is an alphabet";
    else
    cout<<"\ncharacter entered is not an alphabet";
    return 0;
}
