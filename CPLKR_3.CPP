#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float f,c;
 float low = -40 , high = 100;
 c = low;
 while(c < high)
 {
	f = 5*(c - 32)/9;
	printf("%5.2f\t%5.2f\n"c,f);
	c = c + 10;
 }
 getch();
 printf("\n\n");
 f = low;
 while(f < high){
	c = f*9/5 + 32;
	printf("%5.2f\t%5.2f\n",c,f);
	f = f + 10;
 }

 getch();
}

