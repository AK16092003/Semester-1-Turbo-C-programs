#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int n;
	scanf("%d" , &n);
	int *p;
	p = &n;
	if ((*p)%4 == 0)
	{
		if(*p % 100 == 0)
		if(*p%400 == 0)
		printf("leap year");
		else
		printf("not a leap year");
		else printf("leap year");
	}else{
		printf("Not a Leap Year\n");
	}

	getch();
}

