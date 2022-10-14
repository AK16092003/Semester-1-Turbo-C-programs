#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();

 int ans = 0;

 char a[100];
 scanf("%s",a);
 char c;
 scanf("%c",&c);
 scanf("%c",&c);

 for(int i=0;i<100;i++){
	if(a[i] == c)ans++;
	if(a[i] == '\0')break;
 }
 printf("Frequency : %d\n",ans);

 getch();
}

