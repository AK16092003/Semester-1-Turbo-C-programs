#include<stdio.h>
#include<conio.h>

void main()
{

    char a;
    scanf("%c",&a);

    if ((a>=65 && a<=90) || (a>=97 && a<=122))
	printf("%c is a alphabet.\n",a);
    else
	printf("%c is not a alphabet.\n",a);
}
