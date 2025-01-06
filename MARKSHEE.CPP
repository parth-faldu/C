#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int rn,ds,c,js,r,cap,ctop,total;
	char n[25];
	const char* grade;
	float per;
	cout<<"Roll no:";
	cin>>rn;
	cout<<"Enter Name:";
	cin>>n;
	cout<<"\n\t\t---Enter Marks Of 6 Subject---\n";
	cout<<"\nDS:";
	cin>>ds;
	cout<<"C:";
	cin>>c;
	cout<<"JS:";
	cin>>js;
	cout<<"RDBMS:";
	cin>>r;
	cout<<"CAP:";
	cin>>cap;
	cout<<"CTOP:";
	cin>>ctop;
	total=ds+c+js+r+cap+ctop;
	cout<<"\n________________________________Marksheet_______________________________________";
	cout<<"\n\nName\t:\t"<<n;
	cout<<"\n\nRoll no\t:\t"<<rn;
	cout<<"\n\nprogram\t:\tB.sc.I.T.";
	cout<<"\n\nsem\t:\t3";
	cout<<"\n\n\t---------------------------------------------------------";
	cout<<"\n\t\tsubjects\t|\tmarks";
	cout<<"\n\t---------------------------------------------------------";
	cout<<"\n\n\t\tC\t\t|\t"<<c;
	cout<<"\n\t\tJS\t\t|\t"<<js;
	cout<<"\n\t\tRDBMS\t\t|\t"<<r;
	cout<<"\n\t\tCAP\t\t|\t"<<cap;
	cout<<"\n\t\tCTOP\t\t|\t"<<ctop;
	per=float(total*100)/600;
	if(per>=91 && per<=100)
	{
		grade="A1";
	}
	else if(per>=81 && per<=90)
	{
		grade="A2";
	}
	else if(per>=71 && per<=80)
	{
		grade="B1";
	}
	else if(per>=61 && per<=70)
	{
		grade="B2";
	}
	else if(per>=51 && per<=60)
	{
		grade="C1";
	}
	else if(per>=41 && per<=50)
	{
		grade="C2";
	}
	else if(per>=33 && per<40)
	{
		grade="D";
	}
	else
	{
		grade="Fail";
	}
	cout<<"\n\t----------------------------------------------------------";
	cout<<"\n\n\t* Total\t\t:\t"<<total;
	cout<<"\n\t* Percentage\t:\t"<<setprecision(2)<<per;
	cout<<"\n\t* Grade\t\t:\t"<<grade;
	getch();
}
