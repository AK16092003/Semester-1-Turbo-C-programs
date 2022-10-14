#include<stdio.h>
#include<conio.h>
void main()
{
for(int num = 1;num <= 30000 ; num++){
	// count digits ...
	int digit = 0;
	int num1  = num , num2 = num;
	while (num1 != 0){
		num1 = num1/10;
		digit++;
	}
	// check for armstrong number ....
	int ans = 0;
	while(num2 != 0){
		int cur_num = 1;
		//raising each digit to power
		for(int j=0;j<digit;j++){
			cur_num = cur_num * (num2%10);
		}
		ans = ans + cur_num;
		num2 = num2 / 10;
	}
	if(ans == num)
		printf("%d is a armstrong number\n",num);

   }
}