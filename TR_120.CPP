#include<stdio.h>
void main()
{
	int c;
	int *d;
	d = &c;
	scanf("%c" , d);
	if((*d>=65 && *d <= 90) || (*d>=97 && *d<=122)){
		printf("it is a alphabet");
	}
	else{
		printf("it is not alphabet");
	}

}