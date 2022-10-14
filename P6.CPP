#include<stdio.h>
void main()
{

int a = 1,b = 2;
printf(" initial : a = %d , b = %d \n ",a,b);
int c = a;
a = b;
b = c;
printf("Final : a = %d , b = %d \n ",a,b);

}

