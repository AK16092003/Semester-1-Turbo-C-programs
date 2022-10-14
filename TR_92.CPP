#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
  clrscr();
  char a[50] , b[50];
  gets(a);
  gets(b);
  clrscr();
  if (strcmp(a,b) == 0)
  {
	printf("Both are equal ... \n");
  }else{
	printf("Both are not equal ... \n");

  }
  getch();
}