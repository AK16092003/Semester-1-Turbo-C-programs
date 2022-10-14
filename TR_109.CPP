#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a = 10;
	int b = 20;
	int *p;
	int **pp;
	p = &a;
	pp = &p;
	printf("%x\n" , p);    // fff4
	printf("%x\n" , pp);   // fff2
	printf("%d\n" , *p);
	printf("%d\n" , **pp);
	getch();

}