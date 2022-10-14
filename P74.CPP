#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int n = 0 , *_n = &n;
    printf("Enter a number : "); scanf("%d" , _n);

    int n1 = 0 , n2 = 0 , *_n1 = &n1 , *_n2 = &n2;

    for(*_n1 = 2 ; *_n1 <= *_n / 2 ; (*_n1)++)
    {
	*_n2 = *_n - *_n1;
	int i ,j ,*_i = &i , *_j = &j;
	int a = 0,b = 0, *check_n1 = &a , *check_n2 = &b;
	for(*_i = 2 ; *_i < *_n1 ; *_i++)
	{
		if((*_n1)%(*_i) == 0)
		{
			*check_n1 = 1;
			break;
		}
	}
	for(*_j = 2 ; *_j < *_n2 ; *_j++)
	{
		if((*_n2)%(*_j) == 0)
		{
			*check_n2 = 1;
			break;
		}
	}
	if(*check_n1 == 0 && *check_n2 == 0)
	{
		printf("%d + %d = %d\n" , *_n1 , *_n2 , *_n);
	}
    }
    getch();
}
