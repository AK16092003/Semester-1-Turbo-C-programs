#include<stdio.h>
#include<conio.h>

#define area(r) PI*r*r

void main()
{
 clrscr();
 float rad;
 scanf("%f",&rad);
 float PI = 3.14;
 printf("Area of circle : %f\n",area(rad));


 getch();
}

