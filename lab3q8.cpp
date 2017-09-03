# Lab3
//quse8
#include <iostream>

using namespace std;

int main()
{
  char ch;
    cout << "\nenter an alphabet  :";
    cin>>ch;
    if(ch==65||ch==69||ch==73||ch==79||ch==85||ch==97||ch==101||ch==105||ch==111||ch==117)
      cout<<"\nalphabet is a vowel";
    else
    cout<<"\nalphabet is a consonant";
    return 0;
}
