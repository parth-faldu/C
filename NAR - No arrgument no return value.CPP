#include<iostream.h>
#include<conio.h>
void sum();
void main()
{
	clrscr();
	sum();
	getch();
}
void sum()
{
	int a,b;
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	cout<<"\n\nSum:"<<a+b;
}