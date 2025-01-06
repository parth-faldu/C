#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],tos=-1;
void add();
void disp();
void count();
void del();
void update();
void exit();
void main()
{
	int z;
	while(1)
	{
		clrscr();
		printf("\n\t(1) Insert Data");
		printf("\n\t(2) Display Data");
		printf("\n\t(3) Count Value");
		printf("\n\t(4) Delete Value");
		printf("\n\t(5) Update Value");
		printf("\n\t(6) Exit");
		printf("\n\n\tEnter Your Choice:");
		scanf("%d",&z);

		switch(z)
		{
			case 1:
				add();
				break;

			case 2:
				disp();
				break;

			case 3:
				count();
				break;

			case 4:
				del();
				break;

			case 5:
				update();
				break;

			case 6:
				exit();

			default:
				printf("\n\tInvalid Choice");
		  }
		  getch();
	}
}

	void del()
	{
		if(tos==-1)
		{
			printf("\n\tStack Underflow..");
		}
		else
		{
			printf("\n\t%d Removed From Your Record...",x[tos]);
			tos--;
		}
	}

	void count()
	{
		printf("\n\n\tTotal Data:%d",tos+1);
	}

	void add()
	{
		if(tos<size-1)
		{
			tos++;
			printf("\n\tEnter Value:");
			scanf("%d",&x[tos]);
			printf("\n\tData Inserted Succefully...");
		}
		else
		{
			printf("\n\tStack Overflow");
		}
	}

	void disp()
	{
		int i;
		if(tos==-1)
		{
			printf("\n\n\tStack Underflow...");
		}
		else
		{
			for(i=0;i<=tos;i++)
			{
				printf("\n\t\t(%d):%d",i+1,x[i]);
			}
			printf("\n\n\tPress Any Key To Continue..");
		}
	}

	void update()
	{
		int ou,i,flag=0;
		if(tos==-1)
		{
			printf("\n\tStack Underflow");
		}
		else
		{
			disp();
			printf("\n\n\tEnter Value To Be Update:");
			scanf("%d",&ou);
			for(i=0;i<=tos;i++)
			{
				if(x[i]==ou)
				{
					printf("\n\nEnter New Value For Update:");
					scanf("%d",&x[i]);
					printf("\n\n\t%dUpdate With %d In Record",ou,x[i]);
					flag=1;
				}
			}
		}
		if(flag==0)
		{
			printf("\nRecorded Not Found..");
		}
	}
