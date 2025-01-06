#include<iostream.h>
#include<conio.h>
int sum(int x,int y);
void main()
{
	clrscr();
	int a,b,s;
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	s=sum(a,b);
	cout<<"sum="<<s;
	getch();
}
int sum(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;
}