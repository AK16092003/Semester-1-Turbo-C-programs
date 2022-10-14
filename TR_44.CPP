#include<stdio.h>
#include<conio.h>


void main()
{
  int a = 1 , b = 2 , c = 3;
  printf("%d",a<b);    // 1
  printf("%d",b == c);  // 0
  printf("%d",a!=c);    //1
  printf("%d",b&&c);    //1
  printf("%d\n",c||a);     // 1
  getch();
  clrscr();

}