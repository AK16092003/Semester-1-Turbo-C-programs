#include<stdio.h>
#include<conio.h>
void main()
{
  int a = 1,b=2,i;
  switch(a)
  {
	case 1:
	{
	for(i = 0;i<3;i++)
	printf("%d",b);
	}
	default:
	{
	if (a == 0)
	printf("fail");
	else
	printf("retake");
	}

  }


}

