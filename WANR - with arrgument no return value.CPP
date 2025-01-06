#include<iostream.h>
#include<conio.h>
void sum(int x,int y);
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	sum(a,b);
	getch();
}
void sum(int x,int y)
{
	int ans;
	ans=x+y;
	cout<<"Sum="<<ans;
}