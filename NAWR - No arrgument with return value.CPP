#include<iostream.h>
#include<conio.h>
int sum();
void main()
{
	clrscr();
	int s;
	s=sum();
	cout<<"Sum="<<s;
	getch();
}
void sum()
{
	int a,b,ans;
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	ans=a+b;
	return ans;
}