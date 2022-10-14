#include<stdio.h>
#include<conio.h>

void f();
void main()
{
	int i = 2;
	f();
	printf("%d",i);

}

void f()
{
	int i = 3;
	printf("%d",i);
}