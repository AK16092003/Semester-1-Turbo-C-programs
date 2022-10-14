#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();

 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 while (a>b || b>c){
	printf("good morning !\n");
	getch();
	a--;
	b--;
 }



}