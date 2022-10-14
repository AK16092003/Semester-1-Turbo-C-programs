#include<stdio.h>
#include<conio.h>
#include  "array_op.h"

void main()
{
	clrscr();
	int arr1[N] , ans[N];
	int pow = 0;
	initialize(arr1);
	initialize(ans);
	printf("Enter a number : ");
	char a[N];
	gets(a);
	int len = 0;
	for(int i = 0;i<N;i++){
		if (a[i] == '\0')break;
		len++;
	}

	for(i = 0;i<=len/4;i++){
		int a1 = a[len -1 -4*i+0] - '0';
		int a2 = a[len -1 -4*i-1] - '0';
		int a3 = a[len -1 -4*i-2] - '0';
		int a4 = a[len -1 -4*i-3] - '0';
		if(a4<0 || a4>=10)a4 = 0;
		if(a3<0 || a3>=10)a3 = 0;
		if(a2<0 || a2>=10)a2 = 0;
		if(a1<0 || a1>=10)a1 = 0;
		int cur_n = a4*(1000) + a3*(100)+a2*(10)+a1;
		arr1[i] = cur_n;
	}


	print(arr1);
	printf("Enter Power : ");
	scanf("%d" ,&pow);
	power(arr1 ,pow, ans);
	printf("Ans : \n");
	print(ans);
	getch();

}