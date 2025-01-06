#include<iostream.h>
#include<conio.h>
class employee
{
	public:
		int emp_id;
};
void main()
{
	clrscr();
	employee e1;
	e1.emp_id=69;
	cout<<"\nEmployee id:"<<e1.emp_id;
	getch();
}