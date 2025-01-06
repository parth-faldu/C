#include<iostream.h>
#include<conio.h>
#define size 10
void main()
{
	clrscr();
	int x[size],temp;
	cout<<"Enter"<<size<<"values\n\n";
	for(int i=0;i<size;i++)
	{
		cout<<i+1<<":";
		cin>>x[i];
	}
	cout<<"\n\n";
	for(i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		cout<<x[i]<<" ";
	}
	getch();
}