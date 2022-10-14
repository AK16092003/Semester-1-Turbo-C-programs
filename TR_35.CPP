#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 while(a>b)
 {
	printf("Good Morning!\n");
	while(b>c)
	{
		printf("Very Good Morning!\n");
		c++;
	}
	a--;
	c=1;
 }
 getch();
}

