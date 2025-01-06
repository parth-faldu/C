#include<stdio.h>
#include<conio.h>
main()
{
	int j,i,k,n=5;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");


	}
	getch();
	return 0;

}