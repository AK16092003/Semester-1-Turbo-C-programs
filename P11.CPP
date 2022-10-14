#include<stdio.h>
void main()
{
 int a,b,c;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 if(a>b && b>c)
     printf("The rank is a>b>c \n");
 else if(a>c && c>b)
     printf("The rank is a>c>b \n");
 else if(b>a && a>c)
     printf("The rank is b>a>c \n");
 else if(b>c && c>a)
     printf("The rank is b>c>a \n");
 else if(c>a && a>b)
     printf("The rank is c>a>b \n");
 else
     printf("The rank is c>b>a \n");
}
