#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    float num[5],sum=0;
    string name;
    string sub[5]={"Hindi","Maths","Computer","Physics","Chemistry"};
    cout<<"Enter Your first name:";
    cin>>name;
    cout<<"\n**************************Welcome Dear "<<name<<"**************************"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<"How Much You scored in "<<sub[i]<<":";
       cin>>num[i];
       sum=sum+num[i];
       if(((num[i]<0)||num[i]>100))
       {
          cout<<"$Warning$ Error  ~Status-:( number 0 se kam ya 100 se jyada kyu daal rhe ho*";
          break;
          exit(1);
       }

    }
    if((sum!=0) && (sum>0))
    {
    float percentile=(sum*100)/500;
    cout<<"\nDear "<<name<<" You are totaly scored "<<sum<<" out of 500"<<endl;
    cout<<"------------------------------------------";
    cout<<"\nYour Percentile is "<<percentile<<"%";
    }
    else
        cout<<"\n\nDear "<<name<<" You are totaly scored \"--------------------\" out of 500"<<endl;

    getch();

}
