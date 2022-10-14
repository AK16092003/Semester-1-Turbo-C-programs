#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	clrscr();
	int n = 0;
	printf("Enter number of elements :");scanf("%d" , &n);
	float *p = (float *)malloc(n*(sizeof(float)));
	for(int i = 0;i<n ; i ++)
	{
		printf("a[%d] = ",i); scanf("%f",p+i);
	}
	float sum = 0 , *_sum = &sum;
	for(i = 0;i<n ; i++)
		*_sum += *(p+i);
	float avg , *_avg = &avg;
	*_avg = *_sum / n;
	printf("Mean Value : %f\n" , *_avg);
	float var , *_var = &var;
	for(i = 0 ; i < n ; i ++){
		*_var += ((*(p+i) - *_avg)*(*(p+i) - *_avg))/n;
	}
	printf("Variance : %f\n" , *_var);
	float sq = 0 , *_sqrt = &sq;
	while((*_sqrt)*(*_sqrt) < *_var)
	{
		*_sqrt += 0.000001;
	}

	printf("Standard Deviation :%f\n" , *_sqrt);
	getch();
}