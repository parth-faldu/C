#include<stdio.h>
#include<conio.h>
#define size 5
void main()
{
	int x[size],i,j,temp;
	clrscr();
	printf("Enter %d values\n\n",size);
	for(i=0;i<size;i++)
	{
		printf("[%d]:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		 }
	}
	printf("\nafter sorting..\n\n");
	for(i=0;i<size;i++)
	{
		printf(" %d",x[i]);
	}
	getch();
}