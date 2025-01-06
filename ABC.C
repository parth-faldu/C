#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i,n=5;
	char ch='A';
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" %c",ch);
			if(ch<'Z')
			ch++;
		}
		printf("\n");

	}
	printf(" Z");
	getch();
}