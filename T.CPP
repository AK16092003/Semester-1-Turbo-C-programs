#include<stdio.h>
#include<conio.h>
struct student{
  int marks;
};
int sum_marks(struct student s[] , int n);
void main()
{
 int n = 10;
 struct student s[10];
 for(int i=0;i<n;i++)
	scanf("%d",s[i].marks);
 printf("total marks : %d\n" , sum_marks(s, n));
}

int sum_marks(struct student s[] , int n){
	if(n<=0)  return 0;
	return sum_marks(s , n-1) + s[n-1].marks;
}

