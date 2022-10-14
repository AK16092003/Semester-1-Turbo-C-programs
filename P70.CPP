#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n , m = 0;
	int *p = &n;
	printf("Enter a number :");scanf("%d" , p);
	int *ans = &m;
	int orig_num = n;
	while(*p != 0)
	{
		*ans = (*ans)*10 + *p%10;
		*p = *p / 10;
	}
	if(*ans == orig_num)
		printf("%d is a palindrome\n",orig_num);
	else
		printf("%d is not a palindrome\n",orig_num);
	getch();
}