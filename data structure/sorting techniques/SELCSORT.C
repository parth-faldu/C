#include<stdio.h>
#include<conio.h>
#define size 5
void main()
{
	int x[size],j,i,temp;
	clrscr();
	printf("Enter %d value\n",size);
	for(i=0;i<size;i++)
	{
		printf("(%d):",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("\n\tAfter sorting...\n");
	for(i=0;i<size;i++)
	{
		printf(" %d",x[i]);
	}
	getch();
}
