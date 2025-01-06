#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i,a;
	clrscr();
	printf("Enter value 1:");
	scanf("%d",&i);
	printf("Enter value 2:");
	scanf("%d",&a);

	printf("\n\nchoose the action from following:");
	printf("\n\nAddition");
	printf("\nsubtraction");
	printf("\nmultiplication");

	printf("\n\n\nEnter Your Choice:");
	scanf("%d",&x);

	switch(x)
	{
		case 1:
			printf("\n\n\nAddition:%d",i+a);
			break;
		case 2:
			printf("\n\n\nsubtraction:%d",i-a);
			break;
		case 3:
			printf("\n\n\nmultipliction:%d",i*a);
			break;
	}
getch();
}