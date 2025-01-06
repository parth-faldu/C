#include<iostream.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	cout<<"Enter Value:";
	cin>>a;
	if(a<0)
	{
		cout<<"\n\nless than 0";
	}
	else if(a==0)
	{
		cout<<"\n\nequal to 0";
	}
	else
	{
		cout<<"\n\ngreater than 0";
	}
	getch();
}