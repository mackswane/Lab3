# Lab3
//ques 19
#include <iostream>
using namespace std;

int main()
{
 float a,b,c,d,e,t,avg,per,mm,tmm;
cout<<"\nenter maximum marks in the subject:";
cin>>mm;
tmm=5*mm;
    cout <<"\nenter marks obtained in physics =";
    cin>>a;
    cout <<"\nenter marks obtained in chemistry =";
    cin>>b;
    cout <<"\nenter marks obtained in biology =";
    cin>>c;
    cout <<"\nenter marks obtained in mathematics =";
    cin>>d;
    cout <<"\nenter marks obtained in computer =";
    cin>>e;
    t=a+b+c+d+e;
    cout<<"\ntotal marks obtained="<<t<<"\tout of\t "<<tmm;
    avg=t/5;
    cout<<"\naverage marks= "<<avg;
    per=(t*100)/500;
    cout<<"\npercentage= "<<per;
    if(per>=90)
      cout<<"\nGRADE A";
      else
    if(per<90&&per>=80)
      cout<<"\nGRADE A";
      else
    if(per<80&&per>=70)
      cout<<"\nGRADE A";
      else
    if(per<70&&per>=60)
      cout<<"\nGRADE A";
      else
    if(per<60&&per>=40)
      cout<<"\nGRADE A";
      else
   
      cout<<"\nGRADE f";

    return 0;
}
