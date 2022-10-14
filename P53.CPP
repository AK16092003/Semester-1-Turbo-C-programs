#include<stdio.h>
#include<conio.h>

int sum(int n);

void main()
{
 clrscr();
 int n;
 printf("Enter value of n: ");
 scanf("%d" , &n);
 printf("Sum : %d" , sum(n));
 getch();
}


int sum(int n){
	if (n == 0) return 0;
	return n + sum(n-1);
}

