#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
     char a[50] , b[50];
     gets(a);
     gets(b);
     strcat(b,a);
     puts(a);
     puts(b);
}