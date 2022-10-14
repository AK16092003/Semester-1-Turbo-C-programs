#include<stdio.h>
// pointer of function..
int add(int a , int b);

void main()
{
	int a,b;
	int (*p) (int , int);
	int result;
	printf("Value of a and b :");
	scanf("%d %d",&a , &b);
	p = add;
	result = (*p)(a,b);
	printf("result : %d\n",result);
}

int add(int a , int b)
{
	return a+b;
}