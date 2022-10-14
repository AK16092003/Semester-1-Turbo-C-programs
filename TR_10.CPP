#include<stdio.h>

void main()
{
 int a,b,c,d;
 a = 2;b = 3;c = d= 4;
 printf("%d\n",(a<=b || (c<d && a<b)));
 printf("%d\n",((a<=b || c<d) && a>b));
 printf("%d\n",(a<=b || c<d || a>b ));
 printf("%d\n",(a<=b || c<d || a>b));
 printf("%d\n",(a<=b && c<d || a<b));
 if (a<=b && c<d || a<b)
	printf("Sun");
 else
	printf("Moon");
 a>b?printf("Sun") : printf("Moon");
 a>b && c<d?printf("Sun") : printf("Moon");
 printf("%d\n",a>b && b<c || c<=d );
 printf("%d\n",a>b && b<c || c<d);
 printf("%d\n",a<b || (b<c && c<d ));
}