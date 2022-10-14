#include<stdio.h>
#include<conio.h>

void reverse(char s[] ,int w_count,int pos2);

void main()
{
   clrscr();
   char s[100];
   printf("Enter a sentence : ");
   gets(s);
   int w_count = 0;         // number of words
   int len = 0;             // length of sentence
   for(int i = 0;i<100;i++){
	if(s[i] == '\0'){
		w_count ++;
		break;
	}
	if (s[i] == ' '){
		if(i>0 && s[i-1]!= ' ') w_count++;
	}
	len++;
   }
   reverse(s,w_count,len-1);
   getch();
}
void reverse(char s[] ,int w_count,int pos2){
	if (w_count!=0){
		int pos1 = pos2;
		while(s[pos1] != ' ' && pos1>=0)pos1--;
		for(int i = pos1+1;i<=pos2;i++)
			printf("%c",s[i]);
		printf(" ");
		reverse(s ,w_count - 1,pos1-1);
	}
}
