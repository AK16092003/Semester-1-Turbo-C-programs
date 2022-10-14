#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int *a;
	int n = 10;
	a = (int *) malloc(n * sizeof(int));
	for(int i = 0 ;i < n; i++){
		printf("element %d : ",i);
		scanf("%d",a+i);
	}
	int ans = *a;
	int pos = -1;
	for(i = 0 ;i < n ; i ++){
		if(ans <= *(a+i)){
			ans = *(a+i);
			pos = i;
		}
	}
	printf("Element : %d at pos = %d \n",ans,pos);
	getch();
}
