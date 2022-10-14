#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	int *p;
	p = &a;
	printf("Enter a value of a = ");
	scanf("%d",p);
	printf("The number is %s",(*p%2 == 0)?"even":"odd");
	getch();
}


