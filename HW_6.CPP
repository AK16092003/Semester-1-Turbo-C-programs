#include<stdio.h>
#include<conio.h>

void main()
{
 int a11,a12,a13,a21,a22,a23,a31,a32,a33;
 int b11,b12,b13,b21,b22,b23,b31,b32,b33;
 int c11,c12,c13,c21,c22,c23,c31,c32,c33;
 int d11,d12,d13,d21,d22,d23,d31,d32,d33;
 printf("Enter first matrix : \n");
 scanf("%d %d %d",&a11,&a12,&a13);
 scanf("%d %d %d",&a21,&a22,&a23);
 scanf("%d %d %d",&a31,&a32,&a33);

 printf("Enter second matrix : \n");
 scanf("%d %d %d",&b11,&b12,&b13);
 scanf("%d %d %d",&b21,&b22,&b23);
 scanf("%d %d %d",&b31,&b32,&b33);
 c11 = a11 + b11;
 c12 = a12 + b12;
 c13 = a13 + b13;
 c21 = a21 + b21;
 c22 = a22 + b22;
 c23 = a23 + b23;
 c31 = a31 + b31;
 c32 = a32 + b32;
 c33 = a33 + b33;

 d11 = a11 - b11;
 d12 = a12 - b12;
 d13 = a13 - b13;
 d21 = a21 - b21;
 d22 = a22 - b22;
 d23 = a23 - b23;
 d31 = a31 - b31;
 d32 = a32 - b32;
 d33 = a33 - b33;
printf("Summation Matrix : \n");
printf("%d %d %d\n%d %d %d\n%d %d %d\n",c11,c12,c13,c21,c22,c23,c31,c32,c33);
printf("Subtraction Matrix : \n");
printf("%d %d %d\n%d %d %d\n%d %d %d\n",d11,d12,d13,d21,d22,d23,d31,d32,d33);
}