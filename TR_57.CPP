#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

char a[5] = {'a','b','c','d','e'};
scanf("%c%c" ,&a[0]);
scanf("%c%c" ,&a[1]);
scanf("%c%c" ,&a[2]);
scanf("%c%c" ,&a[3]);
scanf("%c%c" ,&a[4]);
printf("%s",a);
getch();
}