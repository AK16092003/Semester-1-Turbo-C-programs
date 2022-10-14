#include<stdio.h>
#include<conio.h>

// recursion ....


int f(int n);

void main()
{


	int n;scanf("%d",&n);
	int ans = f(n);
	printf("The factorial is : %d \n",ans);

}

int f(int n){
	if (n<=1) return 1;
	else return n*f(n-1);
}

