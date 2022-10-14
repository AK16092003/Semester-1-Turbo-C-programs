#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	clrscr();
	int n , *p , sum = 0;
	// serial type

	printf("Enter n: ");scanf("%d" , &n);
	p = (int *)malloc(2*n);
	//getch();
	if (p == NULL)
	{
		printf("Sorry");
		exit(0);
	}
	for(int i = 0 ; i < n ; i++)
		p[i] = i;

	for(i = 0; i < n ; i ++)
		printf("\npiBuffer[%d] = %d\n",i,p[i]);

	free(p);
	getch();

}

