#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int ans[3][3];
 int a[3][3] , b[3][3];
 int i = 0,j = 0;
 printf("Matrix 1 : \n");
 for(i = 0; i <3;i++){
	for(j = 0;j<3;j++){
		scanf("%d",&a[i][j]);
	}
 }

 printf("Matrix 2 : \n");
 for(i = 0; i <3;i++){
	for(j = 0;j<3;j++){
		scanf("%d",&b[i][j]);
	}
 }
 for(i = 0;i<3;i++)
	for(j = 0;j<3;j++)
		ans[i][j] = 0;

 for(i = 0; i <3;i++){
	for(j = 0;j<3;j++){
		for(int k = 0; k<3;k++)
		ans[i][j] = ans[i][j] + a[i][k]*b[k][j];
	}
 }
 printf("Answer : \n");
 for(i = 0; i <3;i++){
	for(j = 0;j<3;j++){
		printf("%d ",ans[i][j]);
	}
	printf("\n");
 }

 getch();
}