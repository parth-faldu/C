#include<stdio.h>
#include<conio.h>
void main()
{
	int x,j,count=0;
	clrscr();
	printf("Enter No:");
	scanf("%d",&x);
	for(j=1;j<=x;j++)
	{
		if(x%j==0)
		{
			count=++count;
		}
	}
	if(count==2)
	{
		printf("\n\nPrime no");
	}
	else
	{
		printf("\n\nNot prime no");
	}
getch();
}