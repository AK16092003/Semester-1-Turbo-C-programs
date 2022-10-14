#include<stdio.h>
void main()
{
 int b = 0;
 scanf("%d",&b);
 int ans = 0;
 int pow = 1;
 while(b)
 {

  int cur_bit = b%10;
  if (cur_bit == 1)
	ans = ans + pow;
  pow = pow *2;
  b = b/10;

 }
printf("Number in decimal %d",ans);

}