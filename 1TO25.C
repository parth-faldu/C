#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%3d",i*j);
		}
		printf("\n");
	}
getch();
}