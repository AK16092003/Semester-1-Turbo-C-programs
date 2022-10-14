#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	char s[] = "ashwanth";
	char *p = s;
	int c = 0;
	while (*p != '\0'){
		if (c != 0)
		printf("\n");
		printf("%c",*p);
		p++;
		c++;
	}
	getch();
}

