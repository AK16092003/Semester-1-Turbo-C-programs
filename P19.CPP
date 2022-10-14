#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 printf("Enter first number :");
 scanf("%d",&a);
 printf("Enter second number :");
 scanf("%d",&b);
 int gcd = 1;
 int c = 1;
 while (c<=a && c<=b){
	if (a%c == 0 && b%c == 0){
		gcd = c;
	}
	c++;
 }
 printf("Gcd of the 2 numbers : %d\n",gcd);
 int lcm = (a*b)/gcd;
 printf("Lcm of the 2 numbers :%d\n",lcm);
}