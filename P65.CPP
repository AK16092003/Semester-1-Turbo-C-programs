#include<stdio.h>
#include<conio.h>

void divide(int *p , int *q);

void main()
{
	clrscr();
	int a,b;
	printf("Enter divident : "); scanf("%d",&a);
	printf("Enter divisor  : "); scanf("%d",&b);
	divide(&a , &b);
	getch();
}
void divide(int *p , int *q){

    int quotient = *p / *q;
    int remainder = *p % *q;
    printf("Quotient : %d \nRemainder : %d\n",quotient, remainder );

}

