#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,count,fact;
	int *n , *c , *ans;
	n = &a;
	c = &count;
	ans = &fact;
	*c = 1;
	*ans = 1;
	scanf("%d" , n);
	while(*c <= *n)
	{
		*ans = (*ans)*(*c);
		(*c)++;
	}
	printf("%d\n" , *ans);
	getch();
}