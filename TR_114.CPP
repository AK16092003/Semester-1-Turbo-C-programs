#include<stdio.h>
#include<conio.h>
void swap(int *p , int *q);
void main()
{
	clrscr();
	int a = 10 , b  = 20;
	printf("%d %d \n",a,b);
	swap(&a , &b);
	printf("%d %d \n",a,b);
	getch();
}



void swap(int *p ,int *q)
{
	int t;
	t = *q;
	*q = *p;
	*p = t;
	printf("%d %d \n",*p , *q);
}

