#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,x[2][5];
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("class:%d",i+1);
		printf("\n\n");
		for(j=0;j<5;j++)
		{
			printf("enter value[%d][%d]:",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		printf("class:%d",i+1);
		printf("\n\n");
		for(j=0;j<5;j++)
		{
		printf(" %d",x[i][j]);

		}
		printf("\n\n");
	  }
getch();
return 0;

}