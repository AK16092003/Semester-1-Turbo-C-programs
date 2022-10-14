#include<stdio.h>
#include<conio.h>

struct length{
	float inch,feet;
};

void main()
{
 clrscr();
 struct length a,b;
 printf("Enter Length 1 (In Inches) :");scanf("%f",&a.inch);
 a.feet = a.inch/12;
 printf("Enter Length 2 (In Feet) :");scanf("%f",&b.feet);
 b.inch = b.feet*12;
 printf("Sum :\n");
 printf("Inches : %f\n",a.inch + b.inch);
 printf("Feet : %f\n",a.feet + b.feet);
 getch();
}

