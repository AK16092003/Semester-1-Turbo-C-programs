#include<stdio.h>
#include<conio.h>

void print_array(int x[5]);

void main()
{
 int x[5] = {1,2,3,4,5};
 print_array(x);

}

void print_array(int x[5]){
	for(int i=0;i<5;i++)printf("%d ",x[i]);
	printf("\n");
}