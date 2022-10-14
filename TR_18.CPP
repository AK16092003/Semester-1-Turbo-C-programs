#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a;
 scanf("%d",&a);
 switch(a){
  case 1:
	printf("good");
  case 2:
	printf("ok");
  case 3:
	printf("not ok");
  case 4:
	printf("Bad");
  default:
	printf("Not Comfortable");
 }
 getch();
}