#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	int data;
	node *next;
};
node *last=NULL;
node *temp;
void add();
void disp();
void count();
void del();
void update();
void exit();
void insert();
int cnt=0;
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
		printf("\n\t(6) Insert Value");
		printf("\n\t(7) Exit");
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
				insert();
				break;
			case 7:
				exit();

			default:
				printf("\n\tInvalid Choice");
		  }
		  getch();
	}
}

void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\tEnter Data:");
	scanf("%d",&temp->data);
	if(last==NULL)
	{
		temp->next=temp;
	}
	else
	{
		temp->next=last->next;
		last->next=temp;
	}
	last=temp;
	printf("\n\tData Inserted Successfully....");
	cnt++;
}
void disp()
{
	int sr=1;
	if(last==NULL)
	{
		printf("\n\tEmpty...");
	}
	else
	{
		do
		{
			temp=temp->next;
			printf("\n\t[%d]:%d",sr++,temp->data);
		}while(temp!=last);
	}
}
void count()
{
	printf("\n\tTotal Data:%d",cnt);
}
void del()
{
	int dl,flag=0;
	node *erase;
	if(last==NULL)
	{
		printf("\nEmpty...");
	}
	else
	{
		disp();
		printf("\n\tEnter Value For Delete:");
		scanf("%d",&dl);
		do
		{
			if(temp->next->data==dl)
			{
				erase=temp->next;
				temp->next=erase->next;
				if(erase==last)
				{
					if(last==temp)
					{
						last=NULL;
					}
					else
					{
						last=temp;
					}
				}
				free(erase);
				flag=1;
				cnt--;
				break;
			}
			temp=temp->next;
		}while(temp!=last);
		temp=last;
	}
	if(flag==0)
	{
		printf("\n\tValue Not Found..!!");
	}
	else
	{
		printf("\n\tData Removed..");
	}
}
void update()
{
	int ov,flag=0;
	if(last==NULL)
	{
		printf("\nEmpty..");
	}
	else
	{
		disp();
		printf("\n\tEnter Value To Be Update:");
		scanf("%d",&ov);
		do
		{
			if(temp->data==ov)
			{
				printf("\n\tEnter New Value:");
				scanf("%d",&temp->data);
				flag=1;
				break;
			}
			temp=temp->next;
		}while(temp!=last);
		temp=last;
	}
	if(flag==0)
	{
		printf("\n\tValue Not Found..!!");
	}
	else
	{
		printf("\n\tValue Updated..");
	}
}
void insert()
{
	int i=0,pos;
	node *ins;
	if(last==NULL)
	{
		add();
	}
	else
	{
		disp();
		printf("\n\tEnter Position No:");
		scanf("%d",&pos);
		if(pos>cnt)
		{
			add();
		}
		else
		{
			ins=(node*)malloc(sizeof(node));
			printf("\n\tEnter Value To Be Inserted:");
			scanf("%d",&ins->data);
			do
			{
				i++;
				if(i==pos)
				{
					ins->next=temp->next;
					temp->next=ins;
					cnt++;
					break;
				}
				temp=temp->next;
			}while(temp!=last);
			temp=last;

		}
	}

}