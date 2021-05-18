#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
main()
{   int choice;
    do
    {       double n,a=0,b=1,nt;
            cout<<"Enter the how much terms you want to print:";
            cin>>n;
            cout<<"\nhere is the "<<n<<" terms of fibonacci series : ";
            cout<<"\n"<<a<<"\n"<<b;
            for(int i=0;i<=n;i++)
            {

                nt=a+b;
                a=b;
                b=nt;
                cout<<"\n"<<nt;
            }
            cout<<"\n****************************Press 1 for start again and For exit Press any key~:**************************";
            cin>>choice;
            if(choice==0)
            {
                exit(0);
            }

    }while(choice==1);

}
