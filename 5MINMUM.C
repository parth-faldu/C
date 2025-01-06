#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i,min=x[0];
	clrscr();
	printf("Enter 5 values to find minimum among them..\n");
	for(i=0;i<5;i++)
	{
		printf("[%d]:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++)
	{
		if(min>x[i])
		{
		     min=x[i];
		}
	}
	printf("\n\nminimum value:%d",min);
	getch();
}