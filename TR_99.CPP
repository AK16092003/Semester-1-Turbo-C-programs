#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[3][3]  , b[3][3];
	int i , j;
	for(i = 0 ; i<3 ; i++)
	{
		for(j = 0;j<3 ; j++)
		{
			printf("%d %d ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0;i<3 ; i++)
		for(j = 0; j<3;j++)
			b[i][j] = a[j][i];

	for(i = 0;i<3;i++){
		for(j = 0; j<3;j++){
			printf("%d " , b[i][j]);
		}
		printf("\n");
	}
	getch();
}

