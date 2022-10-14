#include<stdio.h>
#include<conio.h>
void swap(int a , int b);
void main()
{
	clrscr();
	int a = 100 , b = 200;
	printf("%d %d \n",a,b);
	swap(a,b);
	printf("%d %d \n",a,b);
	getch();
}
void swap(int a , int b)
{
	int t = a;
	a = b;
	b = t;
	printf("%d %d \n",a,b);
}


