#include<stdio.h>
#include<conio.h>
void main()
{

 clrscr();
 int a;
 scanf("%d",&a);
 int count = 0;
 int b = a;
 while(b!=0){
	count++;
	b = b/10;
 }
 for(int c = count;c>0;c--){
	int pow = 1;
	for(int k=0;k<c-1;k++)
		pow = pow*10;
	int q = a/pow;
	switch(q){
		case 1:printf("one ");break;
		case 2:printf("two ");break;
		case 3:printf("three ");break;
		case 4:printf("four "); break;
		case 5:printf("five "); break;
		case 6:printf("six ");  break;
		case 7:printf("seven ");break;
		case 8:printf("eight ");break;
		case 9:printf("nine "); break;
		default:printf("zero ");break;
	}
	a = a%pow;
 }
 getch();
}

