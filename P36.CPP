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
 for(i = 0;i<3;i++)
	for(j = 0;j<3;j++)
		ans[i][j] = a[j][i];

 printf("Answer : \n");
 for(i = 0; i <3;i++){
	for(j = 0;j<3;j++){
		printf("%d ",ans[i][j]);
	}
	printf("\n");
 }
 getch();
}