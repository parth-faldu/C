#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,*p1,*p2,*p3,*p4,*p5,rm1,rm2,rm3,rm4,rm5,z1=0,z2=0,z3=0,z4=0,z5=0;
	clrscr();

	printf("Enter value 1:");
	scanf("%d",&a);
	printf("Enter value 2:");
	scanf("%d",&b);
	printf("Enter value 3:");
	scanf("%d",&c);
	printf("Enter value 4:");
	scanf("%d",&d);
	printf("Enter value 5:");
	scanf("%d",&e);

	p1=&z1;
	p2=&z2;
	p3=&z3;
	p4=&z4;
	p5=&z5;

	printf("\n\n");

	while(a!=0)
	{
		rm1=a%10;
		a=a/10;
		z1=(z1*10)+rm1;
	}
	printf("\n%d",*p1);
	while(b!=0)
	{
		rm2=b%10;
		b=b/10;
		z2=(z2*10)+rm2;
	}
	printf("\n%d",*p2);
	while(c!=0)
	{
		rm3=c%10;
		c=c/10;
		z3=(z3*10)+rm3;
	}
	printf("\n%d",*p3);
	while(d!=0)
	{
		rm4=d%10;
		d=d/10;
		z4=(z4*10)+rm4;
	}
	printf("\n%d",*p4);
	while(e!=0)
	{
		rm5=e%10;
		e=e/10;
		z5=(z5*10)+rm5;
	}
	printf("\n%d",*p5);
getch();
}