#include<stdio.h>
#include<conio.h>
//square root long division

void main()
{
  clrscr();
  int num = 9;

  long int divident = num;
  long int quotient = 0;
  float div = 1;
  // find length of numb
  int c = 0;
  long int n = num;
  while (n>0){
	n = n / 10;
	c ++;
  }
  long int digit = 0;
  long int remainder = 0;
  int max_digit = ((c+1)/2) +1; // numb of time after which decimal added
  while(digit < 5)
  {
	digit++;//number of steps in long division

	long int p = 1;
	if (c%2 == 0){
		long int c1 = c;
		while (c-2 > 0){
			p = p*10;
			c --;
		}
		c = c1 - 2;
	}else{
	       long int c1 = c;
		while (c-1 > 0){
			p = p*10;
			c --;
		}
		c = c1 - 1;

	}
	long int cur_num = num/p; // extract first 2 digits from num.
	num = num % p; // remaining numbers ...

	if (digit == 1)
	{
		// first digit of quotient should be sqrt of
		// the first 2 digits extracted from divident

		long int divisor = 0;
		while (divisor * divisor<=cur_num){
			divisor ++;
		}
		divisor --;
		quotient= quotient*10 + divisor;
		remainder = (cur_num - divisor*divisor);

	}
	else{
		long int cur_divisor = quotient * 2;

		// insert each digit
		if (digit>=max_digit){
		     div = div*10;
		}
		cur_num = cur_num + (100*remainder);


		long int cur_digit = 0;
		long int n_d_t_a = 0; // new digit to add
		while (cur_digit <= 9){
		    long int check_num = ((cur_divisor*10)+cur_digit)*(cur_digit);
		    if (check_num <cur_num){
			n_d_t_a = cur_digit;
		    }
			cur_digit ++;
		}

		quotient = quotient*10 + n_d_t_a;
		remainder = cur_num-((cur_divisor*10)+n_d_t_a)*(n_d_t_a);

	}

      }
  float a = quotient;
  float ans = a/div;
 // printf("a = %f , div = %f , ans = %f",a,div,ans);
  printf("Answer : %f\n",ans);
  getch();

}