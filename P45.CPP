#include<stdio.h>
void main()
{
	char a[100] , b[100];
	scanf("%s",a);
	for(int i=0;i<100 ; i++)
		b[i] = a[i];
	printf("%s",b);

}