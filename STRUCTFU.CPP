#include<stdio.h>
#include<conio.h>
struct student{
  int roll;
};

void func(struct student s[12])
{
	for(int i = 0 ;i < 10 ; i ++)printf("%d" , s[i].roll);
}
void main()
{
	clrscr();
	struct student s[10];
	for(int i =0;i < 10 ; i ++)s[i].roll = i;
	func(s);
	getch();
}



