#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char s[10];
	int pos = 14;
	while (pos>=0){
		if (s[pos]!= '\0') printf("%c",s[pos]);
		pos++;
	}

	getch();
}
