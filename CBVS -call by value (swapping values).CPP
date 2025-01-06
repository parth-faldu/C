#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b);
void main()
{
	clrscr();
	int x=10,y=20;
	cout<<"\nx="<<x<<"\t y="<<y;
	swap(x,y);
	cout<<"\n\n After Calling Swap function values are (call by refernce)\n\n x="<<x<<"\t y="<<y;
	getch();
}
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}