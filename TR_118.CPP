#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float a,b,c,d,e;
	printf("Coefficient of a : "); scanf("%f" , &a);
	printf("Coefficient of b : "); scanf("%f" , &b);
	printf("Coefficient of c : "); scanf("%f" , &c);
	float *p;
	float *q;
	float *r;
	float *s;
	float *t;
	p = &a;
	q = &b;
	r = &c;
	s = &d;
	t = &e;
	*s = ((*q)*(*q)) - (4*(*p)*(*r));
	printf("discriminant : %f \n",*s);
	while( ((*t)*(*t)) < *s)
	{
		(*t) = (*t)+0.000001;
	}
	printf("squareroot: %f\n" ,*t);
	float root1=0 , root2=0;
	float *x1 , *x2;
	x1 = &root1; x2 = &root2;
	*x1 = (-(*q)+(*t))/(2*(*p));
	*x2 = (-(*q)-(*t))/(2*(*p));
	printf("%f %f \n",*x1 , *x2);
	getch();
}

