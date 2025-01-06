#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i,x=1;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",x);
		}
		x=x+2;
		printf("\n");
	}
	getch();
}
