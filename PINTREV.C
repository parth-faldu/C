#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x[5],rm,*p;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("Enter Value%d:",i);
		scanf("%d",&x[i]);
	}
	p=&rm;
	printf("\n\n");
	for(i=1;i<=5;i++)
	{
		printf("Value%d:",i);
		printf("\t");
		while(x[i]!=0)
		{
			rm=x[i]%10;
			x[i]=x[i]/10;
			printf("%d",*p);
		}
		printf("\n");
	}
getch();
}