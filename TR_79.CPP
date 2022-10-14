#include<stdio.h>
#include<conio.h>

float area(float r);

void main()
{
	float r = 0;
	clrscr();
	scanf("%f",&r);
	printf("The area is: %f\n",area(r));
	getch();
}

float area(float r){

	return (3.14*r*r);

}