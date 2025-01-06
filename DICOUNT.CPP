#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int p,d;
	cout<<"Enter Price:";
	cin>>p;
	if(p<100)
	{
		cout<<"\nNo Discount";
	}
	else if(p>=100 && p<200)
	{
		d=(p*5)/100;
		p-=d;
		cout<<"\n5% Discount:"<<p;
	}
	else if(p>=200 && p<400)
	{
		d=(p*10)/100;
		p-=d;
		cout<<"\n10% Discount:"<<p;
	}
	else if(p>=400 && p<800)
	{
		d=(p*20)/100;
		p-=d;
		cout<<"\n20% Discount:"<<p;
	}
	else
	{
		d=(p*25)/100;
		p-=d;
		cout<<"\n25% Discount:"<<p;
	}
	getch();
}