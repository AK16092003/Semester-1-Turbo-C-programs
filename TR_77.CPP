#include<stdio.h>
#include<conio.h>

void f(int n);

void main()
{
 clrscr();
 int n = 2;
 f(2);
 getch();
}

void f(int n){
	printf("The number is %d\n",n);
}

