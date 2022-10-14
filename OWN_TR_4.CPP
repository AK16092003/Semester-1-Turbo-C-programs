#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int (*a)[5];
	int b[5] = {1,2,3,4,5};

	int i = 0;
	a = &b;
	printf("%x %x\n",b,&b);
	printf("Address of B array :\n");
	for(i = 0; i<5;i++) printf("%x,",&b[i]);
	printf("\n");
	printf("Content of A array now :\n");
	for(i = 0; i<5;i++) printf("%x,",a[i]);printf("\n");
	printf("%p --- ",a);
	printf("checking \n");
	for(i = 0 ; i<5;i++)
	{   printf("%x ",*a);
	    printf("%x ",*a+i);
	    printf("%x " , *(*a+i));
	    printf("\n");
	}

	printf("\n");
	printf("Content of A array now :\n");
	for(i = 0; i<5;i++) printf("%x,",a[i]);printf("\n");
	getch();
}

