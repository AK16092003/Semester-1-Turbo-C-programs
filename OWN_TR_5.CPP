#include<stdio.h>
#include<conio.h>

void search(int val);

void main()
{
	clrscr();
	int a = 10,b = 20,c = 30,d = 40,e = 50;
	printf("a = %d address location : %p\n",a,&a);
	printf("b = %d address location : %p\n",b,&b);
	printf("c = %d address location : %p\n",c,&c);
	printf("d = %d address location : %p\n",d,&d);
	printf("e = %d address location : %p\n",e,&e);
	printf("\n");
	int val = -12;
	printf("Enter to search : ");
	scanf("%x",&val);
	search(val);
	getch();

}

void search(int val)
{
	int i = 0;
	int *d = (int *)val;
	printf("Value : %d\n",*d);

}