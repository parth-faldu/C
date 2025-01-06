#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float x,y;
	char z;
	cout<<"Enter Value 1:";
	cin>>x;
	cout<<"Enter Value 2:";
	cin>>y;
	cout<<"\n\n(1)Addition (+)";
	cout<<"\n(2)Subtraction (-)";
	cout<<"\n(3)Multiplication (*)";
	cout<<"\n(4)Division (/)";
	cout<<"\n\nEnter arithmetic operator:";
	cin>>z;
	switch(z)
	{
		case '+':
			cout<<"\n\nAddition:"<<x+y;
			break;

		case '-':
			cout<<"\n\nSubtraction:"<<x-y;
			break;

		case '*':
			cout<<"\n\nMultiplication:"<<x*y;
			break;

		case '/':
			cout<<"\n\nDivision:"<<x/y;
			break;

		default:
			cout<<"\nInvaild choice..!!";
	}
	getch();
}