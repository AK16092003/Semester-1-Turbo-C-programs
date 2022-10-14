#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int (*a)[5];
	int b[5] = {1,2,3,4,5};
	int i = 0;
	a = &b;
	for(i = 0 ; i<5;i++)
	{
		printf("%d ",*(*a+i));

	}
	printf("\n");
	getch();
}

