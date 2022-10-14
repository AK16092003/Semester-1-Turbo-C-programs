#include<stdio.h>
void main()
{
	int b;
	scanf("%d",&b);
	int a = 0;
	while(b){
		a = a*10 + b%10;
		b = b/10;
	}
	while(a!=0)
	{
		int i = a%10;
		switch(i)
		{
			case 0:printf("zero ");break;
			case 1:printf("one ");break;
			case 2:printf("two ");break;
			case 3:printf("three ");break;
			case 4:printf("four ");break;
			case 5:printf("five ");break;
			case 6:printf("six ");break;
			case 7:printf("seven ");break;
			case 8:printf("eight ");break;
			case 9:printf("nine ");break;
		}
		a= a/10;
	}
}
