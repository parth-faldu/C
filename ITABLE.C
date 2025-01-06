#include<stdio.h>
#include<conio.h>
main()
{
	int i,x;
	clrscr();
	printf("Enter number to get table of given no.");
	printf("\n\nEnter no:");
	scanf("%d",&x);
	for(i=1;i<=10;++i)
	{
		printf("\n%d*%d=%d",x,i,x*i);
	}
	getch();
	return 0;

}