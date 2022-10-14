#include<stdio.h>
#include<conio.h>
void test1();
void test2();
void test3();
void main()
{
    void (*funct[3])() = {test1 , test2 , test3};
    clrscr();
    for(int i = 0 ; i < 3 ; i ++)
    (*funct[i])();
    getch();
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