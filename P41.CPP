#include<stdio.h>
void main()
{
	char a[100];
	scanf("%s",a);
	int vowel = 0,cons = 0;
	for(int i=0;i<100;i++){
		if(a[i] == '\0')break;
		switch(a[i]){
		case 'a':case 'e':case 'i':case 'o':case 'u':
		case 'A':case 'E':case 'I':case 'O':case 'U':
			vowel++;
			break;
		default:
			int asc_val = a[i];
			if((65<=asc_val && 90>=asc_val)||(97<=asc_val && 122>=asc_val))
			cons++;
		}
	}
	printf("Vowels %d \nConsonants %d \n",vowel,cons);
}