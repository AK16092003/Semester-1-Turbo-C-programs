#include<stdio.h>
void main()
{
   int year;
   printf("Enter a year :");
   scanf("%d",&year);
   (year%4 == 0 && (year%100 != 0 || year %400 == 0))?printf("It is a leap year\n"):printf("It is not a leap year\n");

}

