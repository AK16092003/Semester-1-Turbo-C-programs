#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n , m = 0;
	int *p = &n;
	printf("Enter a number :");scanf("%d" , p);
	int *ans = &m;
	while(*p != 0)
	{
		*ans = (*ans)*10 + *p%10;
		*p = *p / 10;
	}
	printf("Reverse number : %d" , *ans);
	getch();
}

