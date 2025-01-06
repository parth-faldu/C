#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i,*ptr;
	clrscr();
	ptr=x;
	for(i=0;i<5;i++)
	{
		printf("Enter - %d :",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\t%d",*ptr+i);

	}
	getch();
}