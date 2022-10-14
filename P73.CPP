#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int n , *n1 = &n;
    printf("Enter n : "); scanf("%d" , n1);
    int i = 0;
    int *cur = &i;
    for(*cur = 1 ; *cur <= *n1 ; (*cur)++){
	if ((*n1) % (*cur) == 0)
	{
		printf("%d is a factor\n" , *cur);
	}

    }
    getch();
}