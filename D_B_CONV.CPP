#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;scanf("%d",&n);
 int ans = 0;
 int pow = 1;
 while(n){
 ans = pow*(n%2)+ans;
 n = n/2;
 pow=pow*10;
 }
 printf("decimal to binary : %d",ans);



 getch();
}

