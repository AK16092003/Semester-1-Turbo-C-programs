#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
 char a[2];
 clrscr();
 scanf("%s" , a);
 printf("%d\n",strlen(a));
 gets(a);
 printf("%d",strlen(a));
 getch();

}