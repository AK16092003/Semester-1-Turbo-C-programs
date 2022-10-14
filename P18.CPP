#include<stdio.h>
#include<conio.h>

void main()
{

 int n;
 printf("Enter a number (> 11)  : ");
 scanf("%d" , &n);
 int c =  1;
 while (c<=12){
	printf("%d x %d = %d \n",n,c,n*c);
	c++;
 }

}