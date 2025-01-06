#include<stdio.h>
#include<conio.h>
#define size 5
void main()
{
	int x[size],i,j,temp;
	clrscr();
	printf("Enter %d Values\n\n",size);
	for(i=0;i<size;i++)
	{
		printf("[%d]:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=1;i<size;i++)
	{
		temp=x[i];
		j=i-1;
		while(temp<x[j] && j>=0)
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=temp;
	}
	printf("\nAfter Sorting...\n\n");
	for(i=0;i<size;i++)
	{
		printf(" %d",x[i]);
	}
	getch();
}