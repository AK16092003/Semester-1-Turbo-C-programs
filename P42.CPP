#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char a[100];
 scanf("%s",a);
 for(int i=0;i<100;i++){
	if(a[i] == '\0')break;
	int d = a[i];
	if((65<=d && d<= 90)||(97<=d && d<=122)){}
	else{
		a[i] = ' ';
	}
 }
 printf("%s ",a);
 getch();
}

