#include<stdio.h>
#include<conio.h>
void swap(int *p , int *q);
void main()
{
	int c,d;
	clrscr();
	printf("c = ");scanf("%d" , &c);
	printf("d = ");scanf("%d" , &d);
	printf("Before swapping : c = %d d = %d \n\n",c,d);
	swap(&c , &d);
	printf("____ Inside main() function ____\n");
	printf("After swapping : c = %d , d = %d\n\n",c,d);
	getch();
}
void swap(int *p , int *q)
{
	int t = *p;   *p = *q;    *q = t;
	printf("____ Inside swap() function ___\n");
	printf("After swapping : c = %d , d = %d\n\n",*p,*q);
}