#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("\n%d\n",(a<b && c<d));
printf("%d\n",(a<b && c>d));
printf("%d\n",(a>b && c<d));
printf("%d\n",(a>b && c>d));
printf("%d\n",(a<b || c<d));
printf("%d\n",(a<b || c>d));
printf("%d\n",(a>b || c<d));
printf("%d\n",(a>b || c>d));
getch();
}

