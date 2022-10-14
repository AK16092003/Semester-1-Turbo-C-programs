#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int l,r;
	int *l1 = &l , *l2 = &r;
	printf("Enter lower limit :");scanf("%d",l1);
	printf("Enter upper limit :");scanf("%d",l2);
	int i , *pr = &i;
	for(*pr = *l1 ; *pr <= *l2 ; (*pr)++){
		int j = 0;
		int *j1 = &j;
		int check_pr = 0;
		for(*j1 = 2 ; (*j1) < (*pr) ; (*j1)++ ){
			if ((*pr)%(*j1) == 0)
			{	check_pr = 1;	break;}
		}
		if(check_pr == 0)  printf("%d is prime\n" ,*pr);
	}
	getch();
}