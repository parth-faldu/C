#include<iostream.h>
#include<conio.h>
int area(int len,int width);
int area(int b,float h);
float area(int radius);
void main()
{
	clrscr();
	int area1;
	float area2,area3;
	area1=area(10,20);
	area2=area(2.3f,45.2f);
	area3=area(10);
	cout<<"\nArea of Rectangle="<<area1;
	cout<<"\nArea of Triangle="<<area2;
	cout<<"\nArea of Circle="<<area3;
	getch();
}
int area(int len,int width)
{
	int ans;
	ans=len*width;
	return ans;
}
float area(float b,float h)
{
	return (0.5*b*h);
}
float area(int radius)
{
	return (3.14*radius*radius);
}