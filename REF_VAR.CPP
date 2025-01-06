#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=10;
	int &ref=a;
	cout<<"ref="<<ref;
	a=20;
	cout<<"\na="<<a;
	cout<<"\n\nref="<<ref;
	ref=30;
	cout<<"\na="<<a;
	cout<<"\n\nref="<<ref;
	getch();
}