#include<iostream.h>
#include<conio.h>
#define size 10
void main()
{
	clrscr();
	int x[size],sum=0;
	cout<<"Enter"<<size<<"values\n\n";
	for(int i=0;i<size;i++)
	{
		cout<<i+1<<":";
		cin>>x[i];
	}
	cout<<"\n\n";
	for(i=0;i<size;i++)
	{
		cout<<x[i]<<" ";
		sum+=x[i];
	}
	cout<<"\n\nsum:"<<sum;
	getch();
}