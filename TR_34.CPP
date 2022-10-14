#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c;
 scanf("%d %d %d",&a , &b , &c);
 printf("%d %d %d \n",a,b,c);
 while (a>b)
 {
	printf("Good Morning!\n");
	while (b > c){
		printf("Very good morning\n");
		c ++;
	}
	a--;
 }
 getch();
}