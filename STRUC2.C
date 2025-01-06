#include<stdio.h>
#include<conio.h>
void main()
{
	struct abc
	{
		int rn;
	};
	struct abc z,*ptr;
	ptr=&z;
	clrscr();
	printf("Enter roll no:");
	scanf("%d",&z.rn);
	printf("\n\n%d",ptr->rn);
	getch();

}