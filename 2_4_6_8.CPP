#include<iostream.h>
#include<conio.h>
void forloop();
void whileloop();
void main()
{
	clrscr();
	forloop();
	cout<<"\n\n\n\n";
	whileloop();
	getch();
}
void forloop()
{
	cout<<"Print 2,4,6,8 upto n number using while loop:\n\n";
	int n,x;
	cout<<"\nEnter n number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<x<<" ";
		x+=2;
	}
}
void whileloop()
{
	cout<<"Print 2,4,6,8 upto n number using for loop:\n\n";
	int n,i=2;
	cout<<"\nEnter n number:";
	cin>>n;
	while(i!=n)
	{
		cout<<i<<" ";
		i+=2;
	}
}