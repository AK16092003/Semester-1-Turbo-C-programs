#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 scanf("%d",&n);
 int ans = 0;
 int n1 = n;
 while(n!=0){
 int ld = n%10;
 ans = ans + ld*ld*ld ;
 n = n/10;
 }
 if (n1 == ans) printf("The given number is armstrong\n");
 else printf("The given number is not a armstrong number\n");
 getch();
}

