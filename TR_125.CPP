#include<stdio.h>
#include<conio.h>

int gcd(int * , int *);

void main()
{

clrscr();
int a,b;
scanf("%d %d" , &a , &b);
printf("gcd = %d" , gcd(&a,&b));
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