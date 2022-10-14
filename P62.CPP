#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	int *p , *q;
	p = &a; q = &b;
	scanf("%d %d",p,q);
	printf("Sum : %d \n",*p + *q);
	getch();
}

