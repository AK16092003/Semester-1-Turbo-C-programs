#include<stdio.h>
#include<conio.h>
void main(){
	char a;
	a = getch();
	switch(a)
	{
		case 'a'||'A':
			printf("Vowel");
		case 'e'||'E':
			printf("Vowel");
		case 'i'||'I':
			printf("Vowel");
		case 'o'||'O':
			printf("Vowel");
		case 'u'||'U':
			printf("Vowel");
		default:
			printf("Consonant");
	}
}