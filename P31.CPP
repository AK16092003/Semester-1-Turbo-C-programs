#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n = 10;
 float arr[10];
 for(int i = 0;i<n;i++){
	printf("Enter %d element : ",i+1);
	scanf("%f",&arr[i]);
 }
 float sum , average;
 for(i = 0;i<n;i++)
	sum = sum + arr[i];
 average = sum/n;
 printf("Average of numbers : %f \n",average);
 getch();
}

