#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int d;
  printf("Enter a octal number : ");scanf("%d",&d);
  int ans = 0;
  int pow = 1;
  while(d!=0){
	ans = ans +  (d%10)*pow;
	pow = pow * 8;
	d = d/10;
  }
  printf("Decimal Value : %d\n",ans);

  printf("Enter a decimal number : ");scanf("%d",&d);
  ans = 0;
  pow = 1;
  while(d!=0){
	ans = ans + (d%8)*pow;
	pow = pow * 10;
	d = d/8;
  }
  printf("The octal form is : %d\n",ans);

  getch();
}