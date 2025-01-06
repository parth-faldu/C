#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],y[5],i,j=0,k=0,z[10];
	clrscr();
	printf("Enter value of X\n");
	for(i=0;i<5;i++)
	{
		printf("[%d]:",i+1);
		scanf("%d",&x[i]);
	}
	printf("\nEnter value of Y\n");
	for(i=0;i<5;i++)
	{
		printf("[%d]:",i+1);
		scanf("%d",&y[i]);
	}
	i=0;
	while(i<5 && j<5)
	{
		if(x[i]<y[j])
		{
			z[k++]=x[i++];
		}
		else
		{
			z[k++]=y[j++];
		}
	}
	while(i<5)
	{
		z[k++]=x[i++];
	}
	while(j<5)
	{
		z[k++]=y[j++];
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf(" %d",z[i]);
	}
getch();
}