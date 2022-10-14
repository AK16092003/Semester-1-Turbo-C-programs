#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float a,b;
	float *p , *q;
	p = &a; q = &b;
	scanf("%f %f",p,q);
	printf("Product : %f \n",(*p) * (*q));
	getch();
}

