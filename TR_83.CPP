#include<stdio.h>
#include<conio.h>
#include<string.h>

void ABC(char str[]);

void main(){


clrscr();
char x[] = "Tiruchirappalli is good city ";
ABC(x);
printf("%d",strlen(x));
getch();


}

void ABC(char str[]){
	printf("%s",str);

}