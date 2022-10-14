#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	char s[100];
	scanf("%s",s);
	// length
	int len = 0;
	for(int i=0;i<100;i++){
		if (s[i]=='\0') break;
		len++;
	}
	for( i = 0;i<len/2;i++){
		int j = len - i - 1;
		char a= s[i] , b = s[j];
		s[i] = b;
		s[j] = a;
	}
	printf("The new string : %s\n",s);
	getch();
}