#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int B[3][3] = {{3,6,4},{2,7,1},{5,4,4}};
	int C[3][3] = {{0,0,0},{0,0,0},{0,0,0}}, *c = &C[0][0];
	int *a = &A[0][0];
	int *b = &B[0][0];

	for(int i = 0;i<9;i++)
		for(int j = 3*(i%3) ; j < 3*(i%3)+3 ; j++)
			*(c+ ((i/3)*3) + (j%3)) += (*(a+i))*(*(b+j));

	printf("A matrix");
	for(i = 0 ; i<9 ; i++)
	{
		if(i%3 == 0)printf("\n");
		printf("%d ",*(a+i));
	}
	printf("\nB matrix");
	for(i = 0 ; i<9 ; i++)
	{
		if(i%3 == 0)printf("\n");
		printf("%d ",*(b+i));
	}
	printf("\nANS matrix");
	for(i = 0 ; i<9 ; i++)
	{
		if(i%3 == 0)printf("\n");
		printf("%d ",*(c+i));
	}
	getch();
}

