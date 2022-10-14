#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
a=5;
b=3;
c=1;
while (a>b || b>c++){
	printf("%d %d %d \n",a,b,c);
	b++;
	c++;
}
printf("%d %d %d\n",a,b,c);
getch();

}