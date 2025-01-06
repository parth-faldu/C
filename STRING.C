#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	char s[100];
	clrscr();
	printf("Enter Name:");
	scanf("%s",&s);
	while(s[i]!=0)
	{
		i++;
	}
	printf("length=%d",i);
	getch();

}