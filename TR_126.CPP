#include<stdio.h>
#include<conio.h>

int gcd(int * , int *);

void main()
{

clrscr();
int a,b,c;
int *p = &a , *q = &b, *r = &c;
scanf("%d %d" , p , q);
*r = (*p)*(*q);
printf("lcm = %d" , *r/gcd(p,q));
getch();

}
int gcd(int *p , int *q)
{
	if(*p > *q) return gcd(q,p);
	if(*p == 0) return *q;
	int t = *p;
	*p =(*q)%(*p);
	*q =t;
	gcd(p,q);
}