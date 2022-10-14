#include<stdio.h>

void main()
{
	int (*a)[3];
	int b[3];
	int i;
	for(i = 0 ; i < 3 ; i++) scanf("%d",&b[i]);
	a = &b;
	int max = 0 , pos = 0;
	i = 0;
	while(i<3){
		int num = *(*a+i);
		if (num > max){
		    max = num ; pos = i;
		}
		i++;
	}
	printf("Maximum number %d , at index %d\n",max,pos);
}

