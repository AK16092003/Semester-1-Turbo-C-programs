#include<stdio.h>
#include<conio.h>
void main()
{
  int a= 1;
  char b = 'M';
  float c = 3.14;
  long int a1 = 3;
  long float b1 = 5.9;
  printf("%d",sizeof(a));    //2
  printf("%d",sizeof(b));    //1
  printf("%d",sizeof(c));    //4
  printf("%d",sizeof(a1));   //4
  printf("%d",sizeof(b1));   //8
  getch();
  clrscr();
}

