#include<stdio.h>
#include<conio.h>
void test1();
void test2();
void test3();

// functional pointer array
void func[] = {test1 , test2 , test3};

void main()
{
	clrscr();
	(funcptr[0])();
	(funcptr[2])();
	(funcptr[1])();
	getch();
}
void test1(){printf("hi 0\n");}
void test2(){printf("hi 1\n");}
void test3(){printf("hi 2\n");}