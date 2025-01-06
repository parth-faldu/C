#include<stdio.h>
#include<conio.h>
main()
{
int n,price,tprice;
clrscr();
printf("total chair=");
scanf("%d",&n);
printf("\ntotal price=");
scanf("%d",&tprice);
price=tprice/n;
printf("\nprice of one chair=%d",price);
getch ();
return 0;

}