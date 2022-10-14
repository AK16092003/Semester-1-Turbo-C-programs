#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int A[3][3];
	int (*a)[3][3] = &A;
	for(int i = 0 ; i < 3; i ++){
		for(int j = 0 ; j<3 ; j++){
			printf("A[%d][%d] = ",i,j);
			scanf("%d",(*(*a+i)+j));
		}
	}
	int B[3][3];
	int (*b)[3][3] = &B;
	for(i = 0 ; i <3 ; i ++){
		for(int j = 0 ; j < 3 ; j ++){
			*(*(*b+i)+j) = *(*(*a+j)+i);
		}
	}
	for(i = 0 ; i < 9 ; i ++){
		if(i%3 == 0)printf("\n");
		printf("%d ",*(*(*b+i/3)+i%3) );
	}

}