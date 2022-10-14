#include<stdio.h>
#include<conio.h>

struct student{
	int roll,age;
	char name[50];
};


struct student s1,s2,s3;   //not necessary for struct keyword here.....

void main()
{
clrscr();
printf("%d",sizeof(s1));
getch();
}