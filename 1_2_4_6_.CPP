#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n1;
	cout<<"===Print 1,2,4,6,8,16 upto n number using for loop===\n\n";
	cout<<"\nEnter n number:";
	cin>>n1;
	cout<<"\n";
	for(int i=1;i<=n1;i*=2)
	{
		cout<<i<<" ";
	}
	int n2,x=1;
	cout<<"\n\n\n\n===Print 1,2,4,6,8,16 upto n number using while loop===\n\n";
	cout<<"\nEnter n number:";
	cin>>n2;
	cout<<"\n";
	while(x<=n2)
	{
		cout<<x<<" ";
		x*=2;
	}
	getch();
}