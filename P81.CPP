#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[] = {1,2,3,4,5,6,7,8,9};
	int *b;
	b = a;
	for(int i = 0 ;i < 9 ; i++){
		printf("index = %d , value = %d\n",i,*(b+i));
	}
	getch();

}