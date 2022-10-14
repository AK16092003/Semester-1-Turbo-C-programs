#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int l,r;
	int *l1 = &l , *l2 = &r;
	printf("Enter lower limit :");scanf("%d",l1);
	printf("Enter upper limit :");scanf("%d",l2);
	int i , *num = &i;
	int count = 0;
	for(*num = *l1 ; *num <= *l2 ; (*num)++){

		// count number of digits
		int d = 0 , *dig = &d;
		int num1 = *num;
		int *num_1 = &num1;
		while(*num_1 != 0)
		{
			(*num_1)=(*num_1)/10;
			(*dig)++;
		}


		// check for armstrong number
		int num2 = *num;
		int *num_2 = &num2;
		int ans=  0;
		int *_ans = &ans;
		while(*num_2 != 0){
			int cur_d = (*num_2)%10;
			(*num_2) = (*num_2)/10;
			int pow = 1 , *_pow = &pow;
			for(int i = 0; i < *dig ; i++){
				(*_pow) = (*_pow) * cur_d;
			}
			*_ans = *_ans + *_pow;
		}

		if(*_ans == *num) printf("%d ia armstrong number\n",*num);

	}
	getch();
}