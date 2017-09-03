# Lab3
//ques 11
#include <iostream>

using namespace std;

int main()
{
  int w;
    cout << "\nenter week no. between 1 to 7  :";
    cin>>w;
    switch(w)
    {
      case 1:cout<<"\nMONDAY";break;
      case 2:cout<<"\nTUESDAY";break;
      case 3:cout<<"\nWEDNESDAY";break;
      case 4:cout<<"\nTHURSDAY";break;
      case 5:cout<<"\nFRIDAY";break;
      case 6:cout<<"\nSATURDAY";break;
      case 7:cout<<"\nSUNDAY";break;
    default: cout<<"\nyou have entered a wrong choice";
    }
    return 0;
}
