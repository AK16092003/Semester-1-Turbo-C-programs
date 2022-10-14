#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("Enter number of terms : ");
scanf("%d",&n);
int a = 1,b = 1,c=0;
printf("%d , %d",a,b);
for(int i=0;i<n-2;i++)
{
	c = a+b;
	printf(" , %d",c);
	a = b;
	b = c;
}
getch();

}