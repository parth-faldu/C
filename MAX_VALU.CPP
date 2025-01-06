#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter Value 1:";
	cin>>a;
	cout<<"Enter Value 2:";
	cin>>b;
	cout<<"Enter Value 3:";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"\na is maximum value ";
		}
		else
		{
			cout<<"\nc is maximum value ";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"\nb is maximum value ";
		}
		else
		{
			cout<<"\nc is maximum value ";
		}
	}
	getch();
}