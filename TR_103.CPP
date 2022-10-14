#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a = 10,b = 20 , c = 50;
int *arrop[3];
*arrop[0] = a;
*arrop[1] = b;
*arrop[2] = c;
for(int i= 0 ; i < 3 ; i++)
{
printf("Address : %p , value : %d \n",arrop[i] , *arrop[i]);
}
getch();
}