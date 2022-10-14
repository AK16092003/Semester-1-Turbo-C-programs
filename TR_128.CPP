#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n , c = 0;
	int  *p , *ans;
	p = &n;
	ans = &c;
	scanf("%d" , p);

	while(*p > 0)
	{
		*p = *p / 10;
		(*ans)++;
	}
	printf("Number of digits : %d \n",*ans);
	getch();
}