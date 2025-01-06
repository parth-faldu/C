#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int rno,c,cf,total,per;
	};
	struct student z;
	clrscr();
	printf("enter roll no:");
	scanf("%d",&z.rno);
	printf("enter mark of c:");
	scanf("%d",&z.c);
	printf("enter mark of cf:");
	scanf("%d",&z.cf);
	z.total=z.cf+z.c;
	z.per=z.total/2;
	printf("\ntotal:%d",z.total);
	printf("\nper:%d",z.per);
getch();
}
