#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i;
	char z='A';
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%2c",z);
		}
		z++;
		printf("\n");
	}
getch();
}