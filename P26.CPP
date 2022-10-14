#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 int sum_2_prime = 0;

 printf("Enter a number: ");
 scanf("%d",&n);

 for(int num1 = 2;num1<=n-2;num1++)
 {
	int num2 = n - num1;
	int prime_num1 = 1 , prime_num2 = 1;
	// checking num1 is prime or not
	for(int i = 2;i<num1;i++){
		if(num1%i == 0){
			prime_num1 = 0; // num1 not a prime
		}
	}
	// checking num2 is prime or not
	for(i = 2;i<num2;i++){
		if(num2%i == 0){
			prime_num2 = 0; // num2 not a prime
		}
	}
	if (prime_num1 == 1 && prime_num2 == 1){
		printf("2 primes are : %d %d\n" ,num1,num2);
		sum_2_prime = 1;  // found 2 primes
		}

 }
 if (sum_2_prime == 1)
	printf("Yes , the number can be expressed as sum of 2 primes\n");
 else
	printf("No , the number cannot be expressed as sum of 2 primes\n");
 getch();
}