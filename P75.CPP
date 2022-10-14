#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();

   // binary to decimal conversion

   int n , *_n = &n;
   printf("Enter number in binary : "); scanf("%d" , _n);
   int ans1 = 0 , *_ans1 = &ans1;
   int pow = 1 , *_pow = &pow;
   while(*_n !=0)
   {
	int cur_bit = *_n %10;
	if(cur_bit == 1)
	{
		*_ans1 = *_ans1 + *_pow;
	}
	(*_n) = (*_n)/10;
	*_pow = (*_pow)*2;
   }
   printf("Number in decimal = %d\n",*_ans1);

   // decimal to binary conversion

   printf("Enter number in decimal  :"); scanf("%d" , _n);
   *_ans1 = 0;
   *_pow = 1;
   while(*_n != 0)
   {
	if((*_n) % 2 == 1)
	{
		*_ans1 = (*_ans1) + *_pow;
	}
	(*_pow) = (*_pow)*10;
	(*_n) = (*_n) / 2;
   }
   printf("Number in binary = %d \n" ,*_ans1);
   getch();
}