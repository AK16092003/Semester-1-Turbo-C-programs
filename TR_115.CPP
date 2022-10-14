#include<stdio.h>
#include  "abcd.h"
void main()
{

int a = 10;
int *p;
int **pp;
p = &a;
pp = &p;
printf("%x\n" , &a);
printf("%x\n" , p);
printf("%x\n" , pp);
printf("%d\n" , *p);
printf("%d\n" , **pp);
printf("%x\n" , *pp);

}