#include<stdio.h>
#include<conio.h>
void main()
{
  float f1,f2,f3;
  printf("Enter first number : ");
  scanf("%f",&f1);
  printf("Enter second number : ");
  scanf("%f",&f2);
  printf("Enter third number : ");
  scanf("%f",&f3);
  int a = 1;
  int b = - (f1+f2+f3);
  int c = f1*f2 + f2*f3+ f3*f1;
  int d = -f1*f2*f3;
  printf("polynomial is  %dx^3 + %dx^2 + %dx + %d\n ",a,b,c,d);
  getch();
}

