#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	clrscr();
	int n , *p , sum = 0;
	// sequential type

	printf("Enter n: ");scanf("%d" , &n);
	p = (int *)malloc(2*n);
	getch();
	if (p == NULL)
	{
		printf("Sorry");
		exit(0);
	}
	for(int i = 0 ; i < n ; i++)
		*(p+i) = i;

	for(i = 0; i < n ; i ++)
		printf("%d , ",*(p+i));

	getch();

}

