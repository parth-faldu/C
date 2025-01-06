#include<stdio.h>
#include<conio.h>
void xyz();
void main()
{
	clrscr();
	xyz();
	getch();
}
void xyz()
{
	int x=8,y=5,z=x+y;
	printf("\n\t%d",z);
}