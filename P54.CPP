#include<stdio.h>
#include<conio.h>

int factorial(int n);

void main()
{
 clrscr();
 int n;
 printf("Enter value of n: ");
 scanf("%d" , &n);
 printf("%d! =  %d" ,n,factorial(n));
 getch();
}


int factorial(int n){
	if (n == 0) return 1;
	return n * factorial(n-1);
}