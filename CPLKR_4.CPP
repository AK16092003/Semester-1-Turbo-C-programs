#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 printf("Celsius\t\tFarenheit\n");
 for(float i=0;i<100;i = i + 10){
	float f = 5*(i - 32)/9;
	printf("%f\t%f\n",i,f);
 }
 getch();
}

