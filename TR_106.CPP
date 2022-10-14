#include<stdio.h>

void f(int a[5][3]);

void main()
{
	int a[3][3];
	f(a);

}
void f(int a[5][3]){
	printf("Done!");
}