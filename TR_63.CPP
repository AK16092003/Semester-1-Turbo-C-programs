#include<stdio.h>
#include<conio.h>
#define max(a,b) (a>b)?a:b
#define inp(x) printf("Enter number : ");scanf("%f",&x);

void main(){
   clrscr();
   float a,b;
   inp(a);
   inp(b);
   printf("Maximum : %f",max(a,b));
   getch();

}