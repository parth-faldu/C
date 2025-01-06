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
		if(b>c)
		{
			cout<<"\nc is minimum value ";
		}
		else
		{
			cout<<"\nb is minimum value ";
		}
	}
	else
	{
		if(a>c)
		{
			cout<<"\nc is maximum value ";
		}
		else
		{
			cout<<"\na is maximum value ";
		}
	}
	getch();
}