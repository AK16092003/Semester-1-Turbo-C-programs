#include<stdio.h>
#include<conio.h>
void main(){

	clrscr();
	char s1[100];
	printf("Enter series of string : ");
	gets(s1);

	char s2[100];
	printf("Enter string to be removed : ");
	scanf("%s",s2);
	// find length of s2
	int s2_len = 0;
	for(int i = 0; i<100;i++){
		if (s2[i] == '\0') break;
		s2_len++;
	}

	for(int pos =0;pos<100;pos++){

		if (s1[pos] == '\0')  break;
		int char_match = 0;// number of char matching from cur.pos.
		for(int j=0;j<100;j++){
			if (s2[j] == '\0'|| s1[pos+j] == '\0') break;

			if (s1[pos+j] == s2[j])   char_match++;
		}
		// checking whether it is word , space before and after word
		// number of char matching = len of search string

		if (char_match == s2_len)
		       if (s1[pos-1] == ' ' && s1[pos+s2_len] == ' '){
			// string s2 found in pos of s1
			for(int k = pos; k< pos+s2_len ;k++)
				s1[k] = ' ';
		}
	}
	printf("The new string : %s",s1);
}