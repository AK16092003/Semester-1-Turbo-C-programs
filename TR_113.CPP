#include<stdio.h>
#include<conio.h>

void test1();
void test2();
void test3();
// functional pointer array
void (*funcptr[3])()= {test1 , test2 , test3};
void  main()
{
	clrscr();
       (*funcptr[0])();
       (*funcptr[2])();
       (*funcptr[0])();
       getch();
}

void test1(){
	printf("Hello 0\n");
}
void test2(){
	printf("Hello 00\n");
}
void test3(){
	printf("Hello 000\n");
}