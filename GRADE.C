#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,t;
	float p;
	clrscr();
	printf("science=");
	scanf("%d",&a);
	printf("\nenglish=");
	scanf("%d",&b);
	printf("\nmaths=");
	scanf("%d",&c);
	printf("\ncomputer=");
	scanf("%d",&d);
	t=a+b+c+d;
	p=(float)t/4;
if(a>40 & b>40 & c>40 & d>40)
{
	if(100>=p&p>=90)
	{
	printf("\ntotal=%d",t);
	printf("\npercentage=%.2f",p);
	printf("\nGrade=a+");
	printf("\nresult=pass");
	}
	if(89>p&p>=70)
	{
	printf("\ntotal=%d",t);
	printf("\npercentage=%.2f",p);
	printf("\nGrade=a");
	printf("\nresult=pass");
	}
	if(69>p&p>=60)
	{
	printf("\ntotal=%d",t);
	printf("\npercentage=%.2f",p);
	printf("\nGrade=b+");
	printf("\nresult=pass");
	}
	if(59>p&p>=41)
	{
	printf("\ntotal=%d",t);
	printf("\npercentage=%.2f",p);
	printf("\nGrade=c");
	printf("\nresult=pass");
	}
}
else
{
	printf("\ntotal= ----");
	printf("\npercentage= ---");
	printf("\nGrade=---");
	printf("\nresult=fail");
}
getch();
return 0;
}

