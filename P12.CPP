#include<stdio.h>
void main()
{
 int a,b,c;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 (a>b && b>c)?printf("The rank is a>b>c \n"):((a>c && c>b)?printf("The rank is a>c>b \n"):((b>a && a>c)?printf("The rank is b>a>c \n"):((b>c && c>a)?printf("The rank is b>c>a \n"):((c>a && a>b)?printf("The rank is c>a>b \n"):printf("The rank is c>b>a \n")))));

}
