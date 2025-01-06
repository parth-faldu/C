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
	cout<<"Print 1 To 10 using while loop:\n\n";
	for(int i=1;i<=10;i++)
	{
		cout<<i<<" ";
	}
}
void whileloop()
{
	cout<<"Print 1 To 10 using for loop:\n\n";
	int i=1;
	while(i!=10)
	{
		cout<<i;
		++i;
	}
}