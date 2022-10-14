#include<stdio.h>
#include<conio.h>

int power(int a , int b);

void main()
{
 clrscr();
 int a,b;
 printf("Enter the value of base :  "); scanf("%d",&a);
 printf("Enter the value of power:  "); scanf("%d",&b);
 printf("Answer = %d" , power(a,b));
 getch();

}

int power(int a , int b)
{
	if (b == 0) return 1;
	else return a*power(a,b-1);
}
