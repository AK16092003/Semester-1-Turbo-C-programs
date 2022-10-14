#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 while (a>b || b>c)
 {
	printf("%d %d %d\n",a,b,c);
	a--;
	c++;
 }

 printf("%d %d %d\n",a,b,c);

}