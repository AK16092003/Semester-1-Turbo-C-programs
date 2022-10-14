#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	//ROF AND COF
	// SCANF -> ROF PRINTF -> COF

	char a[4][5];
	int i,j;
	for(i = 0;i<5;i++)
		for(j = 0; j < 4;j++)
			scanf("%c" , &a[j][i]);
	for(i = 0;i<4;i++)
		for(j = 0; j < 5;j++)
			printf("%c" , a[i][j]);
	// SCANF -> COF AND PRINTF -> ROF
	printf("\n");
	for(i = 0;i<4;i++)
		for(j = 0; j < 5;j++)
			scanf("%c" , &a[i][j]);
	for(i = 0;i<5;i++)
		for(j = 0; j < 4;j++)
			printf("%c" , a[j][i]);

	getch();
}

