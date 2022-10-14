#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();
   int a[] = {1,2,3,4,5,6,7,8,9,0};
   int *p = a;
   for(int i=0;i<10;i++)
   {
	printf("Element %d: %d\n",i+1 ,*p);
	p++;

   }
   getch();
}