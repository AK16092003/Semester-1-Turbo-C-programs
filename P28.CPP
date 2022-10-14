#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int d;
  printf("Enter a binary number : ");scanf("%d",&d);
  int ans = 0;
  int pow = 1;
  while(d!=0){
	int last_3_place = d%1000;
	int n1 = last_3_place/100;
	last_3_place = last_3_place%100;
	int n2 = last_3_place/10;
	int n3 = last_3_place%10;
	ans = (n1*4 + n2*2 + n3*1)*pow + ans;
	pow = pow*10;
	d = d/1000;
  }
  printf("Octal Value : %d\n",ans);
  printf("Enter a octal number : ");scanf("%d",&d);
  ans = 0;pow = 1;
  while(d!=0){
	int cur_digit = d%10 , bin = 0;
	switch(cur_digit){
		case 0: bin = 0; break;
		case 1: bin = 1; break;
		case 2: bin = 10; break;
		case 3: bin = 11; break;
		case 4: bin = 100; break;
		case 5: bin = 101; break;
		case 6: bin = 110; break;
		case 7: bin = 111; break;
	}
	ans = ans + pow*bin;
	pow = pow * 1000;
	d = d/10;
  }
  printf("The binary form is : %d\n",ans);
}