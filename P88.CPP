#include<stdio.h>
#include<conio.h>

struct complex{
	int real , imag;
};

void add(struct complex *a , struct complex *b);

void main()
{
	clrscr();
	struct complex a,b;
	struct complex *c = &a;
	struct complex *d = &b;
	printf("Enter complex number 1:\n");

	printf("real = "); scanf("%d" , &c->real);
	printf("complex = ");scanf("%d" , &c->imag);

	printf("Enter complx number 2:\n");
	printf("real = "); scanf("%d" , &d->real);
	printf("complex = ");scanf("%d" , &d ->imag);
	add(c,d);
	getch();

}
void add(struct complex *a , struct complex *b){

	struct complex ans;
	ans.real = a->real + b->real;
	ans.imag = a->imag + b->imag;
	printf("Answer : %d + %di\n",ans.real , ans.imag);
}