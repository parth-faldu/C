#include<iostream.h>
#include<conio.h>
/*enum week_day{mon=1,tue,wed,thu,fri,sat,sun};  if we take 1 in first
value of enum data type than it prints 1 because if dont set value than it
will take 0 as a deafult*/
enum week_day{mon,tue,wed,thu,fri,sat,sun};
void main()
{
	clrscr();
	enum week_day d1;
	d1=mon;
	cout<<"\nDay="<<d1;
	getch();
}