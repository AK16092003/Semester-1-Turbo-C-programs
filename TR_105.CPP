#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};
	int *ptr = &num[0][0];
	int row = 3 , col = 4 , tot_cells , i;
	tot_cells = row * col;

	for(i = 0 ; i < tot_cells; i++){
		printf("%d" , *(ptr + i));
		printf("\n");
	}

	getch();
}