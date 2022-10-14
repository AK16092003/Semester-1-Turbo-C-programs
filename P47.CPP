#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[100];
scanf("%s",a);
for(int i=0;i<100;i++)
{
	if(a[i] == '\0')break;
	int d = a[i];
	if(d>=97 && d<=122)
		printf("%d , ",(d - 96));
	else if(d>=65 && d<=90)
		printf("%d , ",(d - 64));


}
getch();

}