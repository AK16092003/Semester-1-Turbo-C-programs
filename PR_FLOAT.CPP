#include<stdio.h>
#include<conio.h>

struct abc{
float num1;
};
void main()
{
    clrscr();
    struct abc a1[2];
    for(int i=0;i<2;i++)
	scanf("%f",&a1[0].num1);
    getch();

}