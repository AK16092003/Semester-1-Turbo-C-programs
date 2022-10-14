#include<stdio.h>
void main()
{
   float a,b,c;
   printf("Enter coefficient of x^2 : ");
   scanf("%f",&a);
   printf("Enter coefficient of x : ");
   scanf("%f",&b);
   printf("Enter constant term : ");
   scanf("%f",&c);
   float d = b*b - 4*a*c;
   if (d < 0){
	printf("Imaginary Roots only exist ! No real roots!!\n ");
   }else{
	// find square root - decimal
	float sq = 0;
	while (sq*sq<=d){
	  sq = sq + 0.000001;
	}
	float x1 = (-b + (sq))/(2*a);
	float x2 = (-b - (sq))/(2*a);
	printf("Value of x1 = %f\n",x1);
	printf("Value of x2 = %f\n",x2);
   }
}

