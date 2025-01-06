#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i,f=1;
	clrscr();
	printf("Enter value=");
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		f=f*i;

	}
	printf("\nfactorial=%d",f);
	getch();
}