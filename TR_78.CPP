#include<stdio.h>
#include<conio.h>

int f();

void main()
{
int m;
m = f();
printf("the number : %d\n",m);

}



int f(){
	int n = 3;
	return n;
}