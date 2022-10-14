#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
  int a = 1,b = 2;
  while(++a < 10)
  {
	printf("\nA"); // 8 times
	while(++b<10)
		printf("B");     //7 times
	b = 2;
  }
  getch();
}