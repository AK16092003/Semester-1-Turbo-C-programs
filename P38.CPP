#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	printf("Number of lines :");
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();

}