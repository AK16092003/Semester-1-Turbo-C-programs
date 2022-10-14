
#include<stdio.h>
void main()
{
  int a=1,b=2,c=3;
  if((a>b)&& (b<c))
	printf("Good Morning!");
  if(a>b || b>c)
	printf("Good Night");
  (a>b)?printf("Good Morning"):printf("Good Night");
  (a>b)?(b>c ? printf("Good"):printf("Bad")) : printf("Average");
}