#include<stdio.h>
#include<conio.h>
void main()
{
	long int x,rm;
	clrscr();
	printf("Enter Value:");
	scanf("%ld",&x);
	while(x!=0)
	{
		rm=x%10;
		x=x/10;
		printf("%ld",rm);

	}

getch();
}