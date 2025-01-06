#include<stdio.h>
#include<conio.h>
#define size 5
int q[size],front=-1,rear=-1;
void add();
void disp();
void del();
void update();
void count();
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
void add()
{
	if(rear==size-1)
	{
		printf("\n\tQueue is full...");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear++;
		}
		printf("\n\tEnter Value:");
		scanf("%d",&q[rear]);
		printf("\n\n\tValue Inserted...");
	}
}
void disp()
{
	int i;
	if(front==-1)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n\t%d",q[i]);
		}
	}
}
void del()
{
	if(front==-1)
	{
		printf("\n\tQueue is Empty");
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
		printf("\n\tData Removed...");
	}
}
void update()
{
	int ov,i,flag=0;
	if(front==-1)
	{
		printf("\n\tqueue is Empty...");
	}
	else
	{
		disp();
		printf("\n\tEnter Value:");
		scanf("%d",&ov);
		for(i=front;i<=rear;i++)
		{
			if(ov==q[i])
			{
				printf("\n\nEnter Value:");
				scanf("%d",&q[i]);
				printf("\n\tValue update...");
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("\n\t%d not found",ov);
		}
	}
}
void count()
{
	if(front==-1)
	{
		printf("\n\tQueue is Empty");
	}
	else
	{
		printf("\n\n\tTotal Data:%d",rear+1-front);
	}
}
