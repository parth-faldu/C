#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i,x=5;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j/x);

		}
		--x;
		printf("\n");

	}
	getch();

}
