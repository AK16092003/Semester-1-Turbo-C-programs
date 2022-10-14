#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char a[4][6];
	for(int i= 0 ; i<4;i++)
	{
		scanf("%s" , &a[i][0]);

	}
	for(int j = 0; j < 4 ; j++)
	{
		printf("%s",a[j]);
	}
	printf("\n");
	for(i = 0; i<4;i++){
		for(int j = 0; j < 6 ; j++)
		printf("%c ",a[i][j]);
		printf("\n");
	}
	getch();

}