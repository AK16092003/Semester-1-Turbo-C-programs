#include<stdio.h>
#include<conio.h>

void main()
{
 int n;
 scanf("%d",&n);

 for(int i= 1 ; i<=n; i++)
 {
	if (n%i == 0)
		printf("%d is a factor of %d\n",i,n);
 }

}