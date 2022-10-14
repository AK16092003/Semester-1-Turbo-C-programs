#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,count=0 , sum,*n , *c , *ans;
	n = &a;
	c = &count;
	ans = &sum;
	*ans = 0;
	scanf("%d",n);
	while (*c <= *n)
	{
		*ans = *ans + *c;
		(*c)++;

	}
	printf("%d\n" , *ans);
	getche();
}

