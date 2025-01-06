#include<stdio.h>
#include<conio.h>
void main()
{
	long int x,f=1,i,j;
	clrscr();
	printf("**Program To Get Factorial From 1 To A Value Which Given By User**");
	printf("\n\n\nEnter value:");
	scanf("%ld",&x);
	printf("\n\nFactoiral:");
	for(i=1;i<=x;i++)
	{
		for(j=i;j>=1;j--)
		{
			f=f * j;
		}
		printf("\n\t  %ld=%ld",i,f);
		while(f!=1)
		{
			f=--f;
		}
	}
getch();
}