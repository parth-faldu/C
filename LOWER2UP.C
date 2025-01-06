#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void xyz();
void main()
{
	clrscr();
	xyz();
	getch();
}
void xyz()
{
	char z;
	printf("Enter lower Character:");
	scanf("%c",&z);
	if(islower(z))
	{
		printf("\n%c",toupper(z));
	}
}