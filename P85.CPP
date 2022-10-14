#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
   char a[100] ;
   printf("Enter series of string : ");
   gets(a);
   char *c = &a[0];
   int vow = 0 , con = 0;
   while(*c != '\0')
   {
	if(65 <= *c <= 90 || 97 <= *c <= 122){
		switch(*c)
		{
			case 'a':case 'A': vow++;break;
			case 'e':case 'E': vow++;break;
			case 'i':case 'I': vow++;break;
			case 'o':case 'O': vow++;break;
			case 'u':case 'U': vow++;break;
			default : con ++; break;
		}
	}
	c++;
   }
   printf("Number of consonants : %d\n" , con);
   printf("Number of vowels : %d\n" , vow);
   getch();
}