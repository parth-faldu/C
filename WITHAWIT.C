#include<stdio.h>
#include<conio.h>
int xyz(int,int);
void main()
{
	int a=1,b=1,s;
	clrscr();
	s=xyz(a,b);
	printf("%d",s);
	getch();
}
int xyz(int x,int y)
{
	int z=x+y;
	return z;
}