#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	int data;
	node *pre;
	node *next;
};
node *first;
node *last;
node *temp;
int count=0;
void add();
void disp();
void cnt();
void del();
void update();
void exit();
void main()
{
	int z;
	while(1)
	{
		clrscr();
		printf("\n\t(1) Add Data");
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
				cnt();
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
	temp=(node*)malloc(sizeof(node));
	printf("\n\tEnter Value:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(first==NULL)
	{
		temp->pre=NULL;
		first=temp;
	}
	else
	{
		last->next=temp;
		temp->pre=last;
	}
	last=temp;
	count++;
	printf("\n\t\tValue Inserted...!!");
}
void disp()
{
	int i=1;
	if(first==NULL)
	{
		printf("\n\t\tRecord Not Found..!!");
	}
	else
	{
		temp=first;
		while(temp!=NULL)
		{
			printf("\n\t\t[%d]:%d",i++,temp->data);
			temp=temp->next;
		}
	}
}
void del()
{
	int dl,flag=0;
	if(first==NULL)
	{
		printf("\n\t\tRecord Not Found..!!");
	}
	else
	{
		disp();
		printf("\n\n\tEnter Value For Delete:");
		scanf("%d",&dl);
		if(first->data==dl)
		{
			first=first->next;
			free(first->pre);
			first->pre=NULL;
			flag=1;
			count--;
		}
		else if(last->data==dl)
		{
			last=last->pre;
			free(last->next);
			last->next=NULL;
			flag=1;
			count--;
		}
		else
		{
			temp=first->next;
			while(temp!=last)
			{
				if(temp->data==dl)
				{
					temp->pre->next=temp->next;
					temp->next->pre=temp->pre;
					free(temp);
					flag=1;
					count--;
					break;
				}
				temp=temp->next;
			}
		}
		if(flag==0)
		{
			printf("\n\tRecord Not Found..!!");
		}
		else
		{
			printf("\n\t\tRecord Removed..");
		}
	}
}
void update()
{

	int ov,flag=0;
	if(first==NULL)
	{
		printf("\n\t\tRecord Not Found..!!");
	}
	else
	{
		disp();
		printf("\n\n\tEnter Value To Be Update:");
		scanf("%d",&ov);
		temp=first;
		while(temp!=NULL)
		{
			if(ov==temp->data)
			{
				printf("\n\tEnter New Value:");
				scanf("%d",&temp->data);
				flag=1;
				break;
			}
			temp=temp->next;
		}
		if(flag==0)
		{
			printf("\n\tRecord Not Found..!!");
		}
		else
		{
			printf("\n\t\tRecord Updated..");
		}
	}

}
void cnt()
{
	printf("\n\tTotal Data:%d",count);
}