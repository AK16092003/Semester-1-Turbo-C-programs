#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
   char a[100] ;
   printf("Enter a text : ");
   gets(a);
   char *c = &a[0];
   int arr[128];
   for(int i = 0 ; i<128 ; i++) arr[i] = 0;
   while(*c != '\0')
   {
	arr[*c]++;
	c++;
   }
   for(i= 0;i<128 ;i++)
	if (arr[i] > 0)
		printf("%c %d\n",i , arr[i]);
}