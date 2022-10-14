#include<stdio.h>
#include<conio.h>

// mistake done in Lab 6 rectified ....

struct dist{
	int inch , feet;
};


void main()
{
	clrscr();
	struct dist a,b,c;
	printf("Enter distance 1: ");
	scanf("%d",&a.feet);
	scanf("%d",&a.inch);
	printf("Enter distance 2: ");
	scanf("%d",&b.feet);
	scanf("%d",&b.inch);
	c.inch = a.inch + b.inch;
	c.feet = a.feet + b.feet;
	if (c.inch>=12)
	{
		c.feet = c.feet + c.inch/12;
		c.inch = c.inch%12;

	}
	printf("Sum : %d %d",c.feet , c.inch);

	getch();
}

