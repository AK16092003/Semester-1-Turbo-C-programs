#include<stdio.h>
#include<conio.h>

void main()
{

clrscr();
int a = 65;
int *b = &a;
while(*b <= 90){
	printf("%c" , *b);
	(*b)++;
}


getch();
}