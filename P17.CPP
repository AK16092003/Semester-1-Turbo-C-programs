#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();
   int num;
   printf("Enter a number :");
   scanf("%d",&num);
   int ans= 1;
   int c = 1;
   while(c<=num)
   {
	ans = ans * c;
	c++;
   }
   printf("Factorial of number :%d\n",ans);
   printf("Enter the power of the number :");
   int p = 0;
   scanf("%d",&p);
   ans=  1;
   c = 0;
   while (c<p){
	ans = ans * num;
	c++;
   }
   printf("The power of %d to %d is %d\n\n",num,p,ans);
}