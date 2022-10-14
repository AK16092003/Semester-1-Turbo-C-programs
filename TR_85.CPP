#include<stdio.h>
#include<conio.h>
void main()
{

	clrscr();
	int i;
	int *p;
	p = &i;
	*p = 3.14;
	printf("%d\n" ,  i);
	printf("%d\n" , *p);
	printf("%p\n" ,  p);
	printf("%x\n" , &i);
	getch();

}

