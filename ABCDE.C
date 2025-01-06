#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char z='a';
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=z;j<='e';j++)
		{
			printf("%2c",j);
		}
		z++;
		printf("\n");
	}
getch();
}
