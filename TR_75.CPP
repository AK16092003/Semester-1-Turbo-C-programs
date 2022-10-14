#include<stdio.h>
#include<conio.h>
int f();
int g();
void main()
{
	int i = 2;
	f();
	printf("%d",i);
}

f()
{
	int i = 3;
	g();
	printf("%d",i);
}

g()
{
	int i = 5;
	printf("%d",i);
}