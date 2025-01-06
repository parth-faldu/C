#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter Amount:";
	cin>>a;
	cout<<"Enter Rate:";
	cin>>b;
	cout<<"Enter No. Of Period:";
	cin>>c;
	cout<<"\n\nInterest:"<<float(a*b*c)/100;
	getch();
}