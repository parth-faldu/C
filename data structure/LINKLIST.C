#include<stdio.h>
#include<conio.h>
int count=0;
typedef struct xyz node;
struct xyz
{
	int data;
	node *next;
};
node *first=NULL;
node *temp;
node *last;
void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\tEnter Value:");
	scanf("%d",&temp->data);
	printf("\n\tRecord Inserted Successfully...");
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		last->next=temp;
	}
	last=temp;
	count++;
}
void disp()
{
	int sr=0;
	if(first==NULL)
	{
		printf("\n\tRecord Not Found...");
	}
	else
	{
		temp=first;
		while(temp!=NULL)
		{
			printf("\n\t[%d]:%d",++sr,temp->data);
			temp=temp->next;
		}
	}
}
void update()
{
	int ov,flag=0;
	if(first==NULL)
	{
		printf("\n\n\tRecord Not Found...");
	}
	else
	{
		disp();
		printf("\n\n\tEnter Value To Be Update:");
		scanf("%d",&ov);
		temp=first;
		while(temp!=NULL)
		{
			if(temp->data==ov)
			{
				printf("\n\tEnter New Value:");
				scanf("%d",&temp->data);
				flag=1;
			}
			temp=temp->next;
		}
		if(flag==0)
		{
			printf("\n\n\t%d Not Found",ov);
		}
		else
		{
			printf("\n\n\tValue Updated...");
		}
	}
}
void del()
{
	int ov;
	node *erase;
	if(first==NULL)
	{
		printf("\n\tRecord Not Found...");
	}
	else
	{
		disp();
		temp=first;
		printf("\n\n\tEnter Value for delete:");
		scanf("%d",&ov);
		if(first->data==ov)
		{
			erase=first;
			first=first->next;
		}
		else
		{
			while(temp!=NULL)
			{
				if(temp->next->data==ov)
				{
					erase=temp->next;
					if(erase==last)
					{
						last=temp;
					}
					temp->next=erase->next;
				}
				temp=temp->next;
			}
			free(erase);
		}
		printf("\n\n\tData Removed...");
		count--;
	}
}
void insert()
{
	int pos,i=1;
	node *ins;
	if(first==NULL)
	{
		add();
	}
	else
	{
		disp();
		printf("\n\n\tEnter Position No:");
		scanf("%d",&pos);
		if(pos>count)
		{
			add();
		}
		else
		{
			ins=(node*)malloc(sizeof(node));
			printf("\n\tEnter Value:");
			scanf("%d",&ins->data);
			if(pos==1)
			{
				ins->next=first;
				first=ins;
			}
			else
			{
				temp=first;
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}
				ins->next=temp->next;
				temp->next=ins;
			}
			printf("\n\n\tValue Inserted...");
		}
		count++;
	}
}
void cnt()
{
	printf("\n\n\tTotal Data:%d",count);
}
void main()
{
	int z;
	while(1)
	{
		clrscr();
		printf("\n\t(1) add Data");
		printf("\n\t(2) Display Data");
		printf("\n\t(3) Count Value");
		printf("\n\t(4) Delete Value");
		printf("\n\t(5) Update Value");
		printf("\n\t(6) insert Value");
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
				cnt();
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