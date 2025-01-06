#include<stdio.h>
#include<conio.h>
main()
{
	int x[1][5],i,j,e=0,o=0;
	clrscr();
	for(i=0;i<1;i++)
	{

		for(j=1;j<=5;j++)
		{
			printf("enter value[%d][%d]=",i,j);
			scanf("%d",&x[i][j]);

		}

	}
	printf("\nvalues:");
	printf("\n\n");
	for(i=0;i<1;i++)
	{


		for(j=1;j<=5;j++)
		{
			if(x[i][j]%2==0)
			{
				e=++e;
			}
			else
			{
				o=++o
				;
			}

			printf(" %d",x[i][j]);

		}

	}
	printf("\neven=%d",e);
	printf("\nodd=%d",o);





getch();
return 0;

}