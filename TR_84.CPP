#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	int *p;
	scanf("%d",&i);
	printf("%d",i);
	p = &i;
	scanf("%d",p);
	printf("%d",*p);
	getch();
}

