#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int arr[10];
for(int i=0;i<10;i++){
     printf("Enter %d element : ",i+1);
     scanf("%d",&arr[i]);
}

int max_val = arr[0];
for(i = 1;i<10;i++){
     if (arr[i] > max_val)
	max_val = arr[i];
}

printf("The maximum value of array is %d \n",max_val);
getch();

}