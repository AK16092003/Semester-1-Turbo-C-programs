#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	// conversion from octal to binary

	int n = 0 , *_n = &n;
	printf("Enter a number in octal : ");
	scanf("%d",_n);
	int ans = 0 , *_ans = &ans;
	int pow = 1 , *_pow = &pow;
	while(*_n != 0)
	{
		int cur_dig = (*_n)%10;
		int curnum = 0 ,*_curnum = &curnum;
		*_curnum = 0;
		if (cur_dig >=4){*_curnum = *_curnum + 100; cur_dig-=4;}
		if (cur_dig >=2){*_curnum = *_curnum + 10 ; cur_dig-=2;}
		if (cur_dig >=1){*_curnum = *_curnum + 1  ; cur_dig-=1;}
		*_ans = (*_curnum)*(*_pow) + (*_ans);
		(*_n) = (*_n) / 10;
		(*_pow) = (*_pow)*1000;
	}
	printf("Number in binary : %d\n" , *_ans);


	// conversion from binary to octal

	printf("Enter a number in binary : ");
	scanf("%d" , _n);
	*_ans = 0;
	*_pow = 1;
	while(*_n  != 0)
	{
		int cur_dig = (*_n)%1000;
		int curnum = 0 ,*_curnum = &curnum;

		if (cur_dig>=100){cur_dig -= 100; *_curnum +=4;}
		if (cur_dig>=10 ){cur_dig -= 10;  *_curnum +=2;}
		if (cur_dig>=1  ){cur_dig -= 1;   *_curnum +=1;}

		*_ans = (*_ans) + (*_curnum)*(*_pow);
		(*_pow) = (*_pow) * 10;
		(*_n) = (*_n) / 1000;
	}

	printf("Number in octal : %d" , *_ans);
	getch();
}

