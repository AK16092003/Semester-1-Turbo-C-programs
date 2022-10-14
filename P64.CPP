#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char a;
	char *p;
	p = &a;
	scanf("%c",p);
	printf("ASCII VALUE : %d \n",*p);
	getch();
}

