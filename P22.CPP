#include<stdio.h>
#include<conio.h>

void main()
{

 int num;
 printf("Enter the number : ");
 scanf("%d",&num);
 int a = 0;
 while (num>0){

	a = a*10 + num%10;
	num = num / 10;
 }
 printf("Reversed number : %d\n",a);

}