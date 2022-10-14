#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	clrscr();
	int n;
	scanf("%d" , &n);
	printf("%d" , fact(n));
	getch();
}


int fact(int n){
	if (n<=1) return 1;
	return n*fact(n-1);
}