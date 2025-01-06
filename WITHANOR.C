#include<stdio.h>
#include<conio.h>
void xyz(int,int);
void main()
{
	int a=1,b=1;
	clrscr();
	xyz(a,b);
	getch();
}
void xyz(int x,int y)
{
	printf("%d",x+y);
}