#include<stdio.h>
#include<conio.h>

void ABC(char name[10]);

void main()
{
	char x[15];
	scanf("%s",x);
	ABC(x);
}

void ABC(char name[10])
{
printf("%s" , name);
}