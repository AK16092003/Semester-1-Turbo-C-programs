#include<stdio.h>
#include<conio.h>
void main()
{

   float a,b,c;
   printf("Enter coefficient of x^2 : ");
   scanf("%f",&a);
   printf("Enter coefficient of x : ");
   scanf("%f",&b);
   printf("Enter constant term : ");
   scanf("%f",&c);
   int d=b*b - 4*a*c;
   if (d < 0){
	printf("Imaginary Roots only exist ! No real roots!!\n ");
   }else{
	// find square root - decimal
	// long division method - starts here
  int num = d;
  printf("Number to find square root : %d\n",num);
  long int divident = num;
  long int quotient = 0;
  float denominator = 1;
  // find length of numb
  int count = 0;
  long int n = num;
  while (n>0){
	n = n / 10;
	count ++;
  }
  long int digit = 0;
  long int remainder = 0;
  int max_digit = ((count+1)/2) +1; // numb of time after which decimal added
  while(digit < 5)
  {
	digit++;//number of steps in long division

	long int p = 1;
	if (count%2 == 0){
		long int c1 = count;
		while (count-2 > 0){
			p = p*10;
			count --;
		}
		c = c1 - 2;
	}else{
	       long int c1 = count;
		while (count-1 > 0){
			p = p*10;
			count --;
		}
		count = c1 - 1;

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
		     denominator = denominator*10;
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
  float numerator = quotient;
  float ans = numerator/denominator;
 // printf("a = %f , div = %f , ans = %f",a,div,ans);
  printf("Answer for sqrt: %f\n",ans);
	// long division method ends here

	float x1 = (-b + (ans))/(2*a);
	float x2 = (-b - (ans))/(2*a);
	printf("Value of x1 = %f\n",x1);
	printf("Value of x2 = %f\n",x2);
	getch();
   }
}