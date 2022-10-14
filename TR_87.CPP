#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char a[3][10] = {"Good","Bad","Average"};
	for(int i=0;i<3;i++){
		for(int j=0 ; j<10;j++){
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
	getch();
	printf("%s" , a);
	getch();

}

