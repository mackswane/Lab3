# Lab3
//ques 12
#include <iostream>

using namespace std;

int main()
{
  int w;
    cout << "\nenter month number between 1 to 12  :";
    cin>>w;
    switch(w)
    {
      case 1:cout<<"\nJanuary - 31 days";break;
      case 2:cout<<"\nFebruary - 28 days in a common year and 29 days in leap years";break;
      case 3:cout<<"\nMarch - 31 days";break;
      case 4:cout<<"\nApril - 30 days";break;
      case 5:cout<<"\nMay - 31 days";break;
      case 6:cout<<"\nJune - 30 days";break;
      case 7:cout<<"\nJuly - 31 days";break;
      case 8:cout<<"\nAugust - 31 days";break;
      case 9:cout<<"\nSeptember - 30 days";break;
      case 10:cout<<"\nOctober - 31 days";break;
      case 11:cout<<"\nNovember - 30 days";break;
      case 12:cout<<"\nDecember - 31 days";break;
    default: cout<<"\nyou have entered a wrong choice";
    }
    return 0;
}
