#include<stdio.h>
#include<conio.h>
#define PTF(a) printf("%d ",a)
#define SCF(a) scanf("%d",&a)
#define input(a) for(i=0;i<3;i++){for(j=0;j<3;j++) SCF(a[i][j]);}
#define print(a) for(i=0;i<3;i++){for(j=0;j<3;j++) PTF(a[i][j]);printf("\n");}
// using macro ....

void matrix_mul(int a[3][3] , int b[3][3]);

void main()
{       clrscr();
	int a[3][3] , b[3][3];
	int i = 0 , j = 0;
	printf("Enter matrix 1: \n");
	input(a);
	printf("Enter matrix 2:\n");
	input(b);
	matrix_mul(a,b);
	getch();
}

void matrix_mul(int a[3][3] , int b[3][3])
{
	int ans[3][3];
	int i = 0,j = 0;
	for(i=0;i<3;i++)
	{
		for(j= 0;j<3;j++)
		{
			ans[i][j] = 0;
			for(int k= 0 ;k<3;k++)
				ans[i][j] = ans[i][j] + a[i][k]*b[k][j];
		}
	}
	printf("Answer Matrix : \n");
	print(ans);
}





