#include<stdio.h>
#include<conio.h>
void foo(int **pp);

void main()
{
	clrscr();
	int a = 5;
	int *p  = &a;
	printf("%d \n",*p);
	foo(&p);
	printf("%d \n",*p);
	getch();
}

void foo(int ** pp)
{
	int b = 10;
	*pp = &b;
}

