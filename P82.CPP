#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(int *a , int n);
void main()
{
      clrscr();
      int A[] = {1,2,3,4,5};
      int *b = &A[0];
      int n = sizeof(A) / sizeof(A[0]);
      printf("Array before : \n");
      for(int i = 0 ; i < n;i++)printf("%d ",*(b+i));
      swap(b,n);
      printf("\nArray After : \n");
      for(i = 0 ; i < n;i++)printf("%d ",*(b+i));
      getch();
}

void swap(int *a,int n)
{
	int first = *a;
	int i = 0 , t = 0;
	for(i = 0 ; i < n-1 ; i ++ )
	{
		t = *(a+i+1);
		*(a+i) = t;
	}

	*(a+i) = first;
}