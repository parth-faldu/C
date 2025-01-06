#include<stdio.h>
#include<conio.h>
struct abc
{
	int rn;
};
void xyz(struct abc);
void main()
{
	struct abc z;
	clrscr();
	printf("Enter roll no:");
	scanf("%d",&z.rn);
	xyz(z);
	getch();
}
void xyz(struct abc x)
{
	printf("\n\n%d",x.rn);
}