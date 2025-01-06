#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	float x,y,z;
	cout<<"Enter Value 1:";
	cin>>x;
	cout<<"Enter Value 2:";
	cin>>y;
	cout<<"Enter Value 3:";
	cin>>z;
	cout<<"\n\nAverage :"<<setprecision(2)<<(x+y+z)/3;
	getch();
}