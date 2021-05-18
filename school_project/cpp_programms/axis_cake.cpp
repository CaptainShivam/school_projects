#include<iostream>        
#include<iomanip>
#include<cstdlib>
#include<conio.h>
#include<math.h>
#define clrscr system("cls"); //defining clrscr; ---warning ye function nhi hai sirf macro hai 
using namespace std;
int main()
{       clrscr; /*--ye maine define kiya hai ! sahi work kr rha ya nhi yahi check krna tha--*/
	    system("title Shivam#Coder#C++"); //---ye function <cstdlib> header me store hai
	    int n;
	    start:  //-----control statement use kiya hai goto wala 
	    	cout<<setw(50);
	    	cout<<"Number of Rows:";
	    	cin>>n;
		for(int i=n;i>=-n;i--)
		{    
			for(int j=n/2;j>=abs(i/2);j--)
			{
				
				cout<<(char)3<<"~~";//-----3 value ka ascii code heart hota hai  
				/*system("color 04");
				system("color 06");
				system("color 0a");
				system("color 03");*/
			}
		  	     
	      cout<<endl;
		}
		
		system("color 0c");
		char c;
		cout<<"press \"s\" for start again:_";
		c=getch();
		if(c=='s'||c=='S')
		{
			clrscr;
			goto start;
		}
		else
		exit(0); //-----<cstdlib> me store hota hai exit on function  
		getch(); //-----<conio.h> me store hota hai exit on funcrtion  
	
}
