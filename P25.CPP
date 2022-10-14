#include<stdio.h>
#include<conio.h>
void main()
{

float a,b;
char c;
printf("Enter operation ");   scanf("%c",&c);
printf("Enter number 1: ");   scanf("%f",&a);
printf("Enter number 2: ");   scanf("%f",&b);

switch(c){
	case '+':
		printf("Ans = %f\n",a+b);
		break;
	case '-':
		printf("Ans = %f\n",a-b);
		break;
	case '*':
		printf("Ans = %f\n",a*b);
		break;
	case '/':
		printf("Ans = %f\n",a/b);
		break;
	default:
		printf("Wrong Symbol , try again !! \n");
}

getch();
}