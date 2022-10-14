#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	clrscr();
	int n = 0;
	printf("Enter size of array :");scanf("%d" , &n);
	int *p = (int *)malloc(n*(sizeof(int)));
	for(int i = 0;i<n ; i ++)
	{
		printf("a[%d] = ",i); scanf("%d",p+i);
	}
	int max = 0 , *_max = &max;
	for(i = 0;i<n ; i++)
		if (*(p+i) > *_max) *_max = *(p+i);
	printf("Maximum Elememt : %d\n" , *_max);
	getch();
}