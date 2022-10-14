#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char a[20];
 scanf("%s",a);
 for(int i=0;i<20;i++){
	int asci_val = a[i];
	asci_val = asci_val - 96;
	printf("%d , ",asci_val );
 }

 getch();
}

