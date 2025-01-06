#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i,z;
	clrscr();
	printf("Enter 5 values\n");
	for(i=0;i<5;i++)
	{
		printf("[%d]",i+1);
		scanf("%d",&x[i]);
	}
	printf("\n\nEnter Search value:");
	scanf("%d",&z);
	for(i=0;i<5;i++)
	{
		printf("\n%d",x[i]);
		if(z==x[i])
		{
			printf("\t<==Value Found Here..");
		}
	}
	getch();
}