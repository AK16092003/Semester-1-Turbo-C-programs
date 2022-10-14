#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	int *d , *e , *f;
	d = &a;
	e = &b;
	f = &c;
	*d = 1;
	*e = 1;
	printf("%d , %d ",*d , *e);
	for(int i = 0 ; i<21 ; i++){
		*f = *d+*e;
		printf(", %d ",*f);
		*d = *e;
		*e = *f;
	}
	getch();
}

