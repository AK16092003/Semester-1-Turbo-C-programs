#include<stdio.h>
#include<conio.h>

void reverse(char a[] , int n);

void main()
{
  clrscr();   char a[100];
  printf("Enter a sentence : ");
  gets(a);

  int n = 0;
  for(int i=0;i<100;i++){
	if(a[i] == '\0') break;
	else n++; // length of input sentence
  }
  printf("Reversed sentence \n");
  reverse(a,n);
  getch();
}

void reverse(char a[] , int n){
       if (n != 0){
		printf("%c" , a[n-1]);
		reverse(a,n-1);
       }
}




