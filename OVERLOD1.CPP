#include<iostream.h>
#include<conio.h>
int sum(int a,int b);
int sum(int a,int b,int c);
void main()
{
	clrscr();
	int s1,s2;
	s1=sum(10,10);
	s2=sum(10,10,10);
	cout<<"Sum 1:"<<s1;
	cout<<"\nSum 2:"<<s2;
	getch();
}
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}