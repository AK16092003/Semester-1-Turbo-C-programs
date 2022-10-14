#include<stdio.h>
#include<conio.h>
int gcd(int x,int y);

void main()
{
 clrscr();
 int a,b;
 printf("Enter number 1: ");
 scanf("%d" , &a);
 printf("Enter number 2: ");
 scanf("%d" , &b);
 printf("GCD = %d" , gcd(a,b));
 getch();
}
int gcd(int x , int y)
{
	if(x>y) return gcd(y,x);
	else if(y%x == 0) return x;
	else return gcd(y-x , x);
}