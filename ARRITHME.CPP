#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int x,y;
	cout<<"Enter Value 1:";
	cin>>x;
	cout<<"Enter Value 2:";
	cin>>y;
	cout<<"\n\nAddition:"<<x+y;
	cout<<"\nsubtraction:"<<x-y;
	cout<<"\nAddition:"<<x*y;
	cout<<"\nAddition:"<<setprecision(2)<<float(x)/y;
	getch();
}