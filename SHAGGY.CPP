#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();

 for(int num = 1;num<1000;num++){

 int shaggy  = 0;
 if (num%6 == 0)shaggy = 1;
 int num1 = num;
 while(num1){
	if (num1%10 == 6) shaggy = 1;
	num1 = num1/10;
 }

	if (shaggy == 1)printf("shaggy");
	else printf("%d",num);


 }



 getch();
}

