#include<stdio.h>
#include<conio.h>
void test1();
void test2();
void test3();
void main()
{
    void (*funct)();
    funct = test1;
    (*funct)();
}

void test1()
{
	printf("h");
}
void test2()
{
	printf("i");
}
void test3()
{
	printf("s");
}