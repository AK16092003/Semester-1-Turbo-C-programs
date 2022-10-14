#include<stdio.h>
#include<conio.h>
#define N 1000

void copy(int *p, int *q)
{       int i = 0;
	for(i = 0;i<N;i++){
		*(q+i) = *(p+i);
	}
}
void initialize(int *p){
	int i;
	for(i = 0; i <N;i++){
		*p = 0;
		p++;
	}
}
void carry_over(int *p)
{
	int i = 0;
	for(i = 0;i<N;i++){
		if (*p >= 10000)
		{
			if(i+1 != N)
			  *(p+1) = *(p+1) + *p/10000;
			*p = (*p)%10000;
		}
		p++;
	}
}

void print(int *p){
	int i;
	int st = 0;
	int first_time = 0;
	for(i = N-1;i>=0;i--)
	{       if (*(p+i) != 0){
			st = 1;
			first_time = 1;
		}
		if (st == 1)
		{

			int cur_p = *(p+i);
			if (first_time == 0){
				if (cur_p<10)printf("000");
				else if (cur_p<100)printf("00");
				else if (cur_p<1000)printf("0");
			}
			printf("%d" , *(p+i));
			first_time = 0;
		}
	}
	printf("\n");
}

void multiply_scalar(int *p , int sc)
{
	int i;
	for(i = 0;i<N;i++) {*p = (*p) * sc; p++; }
	carry_over(p-N+1);

}


void mult_array(int *a , int *b , int *ans)
{
	int i , j , max_i , max_j;
	long int d1 , d2;
	for(max_i = N-1;max_i>0;max_i--){
		if (*(a+max_i) != 0)break;
	}
	for(max_j = N-1;max_j>0;max_j--){
		if (*(b+max_j) != 0)break;
	}
	//printf("A :");print(a);
	//printf("B :");print(b);
	//printf("%d %d \n",max_i , max_j);
	for(i = 0 ; i <= max_i ; i++)
		for(j = 0;j<= max_j;j++){
			if (i+j>=N)break;
			d1 = (long int)*(a+i);
			d2 = (long int)*(b+j);
			*(ans+i+j) =*(ans + i + j)+(int)((d1*d2)%10000);
			*(ans+i+j+1) = *(ans+i+j+1) +(int) ((d1*d2)/10000);
		}
	carry_over(ans);

}

void power(int *a , int p , int *ans)
{       int i = 0;
	if (p == 0)
	{
	     (*ans)++;
	     return ;
	}
	else if (p == 1)
	{
	     for(i = 0;i<N ; i++){
		*(ans+i) = *(a+i);
	     }
	     return ;
	}
	else if(p%2 == 0)
	{
		int ans1[N] , ans2[N];
		initialize(ans1);
		power(a,p/2,ans1);
		copy(ans1,ans2);
		mult_array(ans1,ans2,ans);
		return ;
	}
	else{

		int ans1[N] , ans2[N] , ans3[N];
		initialize(ans1);
		initialize(ans2);
		initialize(ans3);
		power(a,p/2,ans1);
		copy(ans1,ans2);
		mult_array(ans1,ans2,ans3);
		mult_array(ans3,a,ans);
		return ;
	}

}




