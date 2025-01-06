#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x[10],odd=0,even=0,seven=0,sodd=0;
	cout<<"Enter 10 Values\n\n";
	for(int i=0;i<10;i++)
	{
		cout<<i+1<<":";
		cin>>x[i];
	}
	for(i=0;i<10;i++)
	{

		if(x[i]%2==0)
		{
			++even;
			seven+=x[i];
		}
		else
		{
			++odd;
			sodd+=x[i];
		}
	}
	cout<<"\n\nTotal odd values:"<<odd;
	cout<<"\nSum of odd values:"<<sodd;
	cout<<"\n\nTotal even values:"<<even;
	cout<<"\nSum of even values:"<<seven;
	getch();
}