#include<stdio.h>
#include<conio.h>
#define size 5
int q[size],front=-1,rear=-1;
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
		/*printf("\n\t(3) Count Value");*/
		printf("\n\t(3) Delete Value");
		printf("\n\t(4) Update Value");
		printf("\n\t(5) Exit");
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

		      /*	case 3:
				count();
				break;*/

			case 3:
				del();
				break;

			case 4:
				update();
				break;

			case 5:
				exit();

			default:
				printf("\n\tInvalid Choice");
		  }
		  getch();
	}
}
void add()
{
	if((rear+1)%size==front)
	{
		printf("\n\tQueue is full...");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		if(rear<size-1)
		{
			rear++;
		}
		else
		{
			rear=0;
		}
		printf("\n\tEnter Value:");
		scanf("%d",&q[rear]);
		printf("\n\tValue inserted...");
	}
}
void disp()
{
	int i;
	if(front==-1)
	{
		printf("\n\tQueue is empty...");
	}
	else
	{
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("\n\t%d",q[i]);
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				printf("\n\t%d",q[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("\n\t%d",q[i]);
			}
		}
	}
}
void del()
{
	if(front==-1)
	{
		printf("\n\tQueue is empty...");
	}
	else
	{     
		if(front==rear)
		{
			front=-1;
		}
		else
		{
			if(front<size-1)
			{
				front++;
			}
			else
			{
				front=0;
			}
		}
		printf("\n\tData removed...");
	}
}
void update()
{
	int i,ov,flag=0;
	if(front==-1)
	{
		printf("\n\tQueue is empty...");
	}
	else
	{
		disp();
		printf("\n\tEnter Value For Update:");
		scanf("%d",&ov);
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				if(q[i]==ov)
				{
					flag=1;
					break;
				}
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				if(q[i]==ov)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				for(i=0;i<=rear;i++)
				{
					if(q[i]==ov)
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==0)
		{
			printf("\n\t%dValue not found",ov);
		}
		else
		{
			printf("\n\tEnter New Value:");
			scanf("%d",&q[i]);
		}
	}
}