#include<stdio.h>
#include<conio.h>
void main()
{
	int x=1;
	clrscr();
	printf("============");
	printf("\n");
	xyz:
	printf(" %d",x++);
	if(x<=10)
	{
		goto xyz;
	}
getch();
}