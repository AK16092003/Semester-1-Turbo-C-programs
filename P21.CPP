#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 int c = 0;
 while (n>0){
	c = c+1;
	n = n/10;
 }
 printf("The number of digits : %d\n",c);


}