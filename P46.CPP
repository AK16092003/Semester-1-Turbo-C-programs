#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char a[100];
 gets(a);
 char c;
 printf("Enter alphabet : ");
 scanf("%c",&c);
 for(int i=0;i<100;i++){

 if(a[i] == '\0')break;
 if(a[i] == c)printf("position : %d \n",i);

 }
 getch();
}

