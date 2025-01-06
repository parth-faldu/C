#include<stdio.h>
#include<conio.h>
void main()
{
	int x[4],i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("Enter Value%d:",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n");
	for(i=1;i<=5;i++)
	{
		if(x[i]%2!=0)
		{
			printf("\n%d is odd",x[i]);
		}
	}
getch();
}