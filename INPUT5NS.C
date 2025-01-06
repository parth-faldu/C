#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],j,a=0;
	clrscr();
	for(j=1;j<=5;j++)
	{
		printf("Enter Value %d:",j);
		scanf("%d",&x[j]);
		a=a+x[j];
	}
	printf("\n\nSum Of 5 Values:%d",a);

getch();
}