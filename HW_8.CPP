#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 scanf("%d",&n);
 int a = 0,c = 0;
 while(n){
	c = c + 1;
	a = a*10 + n%10;
	n = n/10;
 }
 while(a){
	c = c - 1;
	int digit = a%10;
	a = a / 10;
	if (digit == 0)printf("zero ");
	else if (digit == 1)printf("one ");
	else if (digit == 2)printf("two ");
	else if (digit == 3)printf("three ");
	else if (digit == 4)printf("four ");
	else if (digit == 5)printf("five ");
	else if (digit == 6)printf("six ");
	else if (digit == 7)printf("seven ");
	else if (digit == 8)printf("eight ");
	else printf("nine ");
 }
 while(c){

	c--;
	printf("zero ");
 }


 getch();
}

