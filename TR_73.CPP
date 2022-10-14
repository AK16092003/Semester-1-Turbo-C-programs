#include<stdio.h>
#include<conio.h>

struct xyz{
	char p[3][4];
	int age;
};


void main()
{
 clrscr();
 struct xyz a,b,c;
 scanf("%s",a.p);
 printf("%s\n",a.p);
  for(int i = 0;i<3;i++)
 for(int j=0;j<4;j++){
 printf("%d %d %d\n",i,j,a.p[i][j]);
 getch();}
 for(i=0;i<3;i++){
	scanf("%s",a.p[i]);
 }
 printf("%s\n",a.p);
  for(i = 0;i<3;i++)
 for(j=0;j<4;j++){
 printf("%d %d %d\n",i,j,a.p[i][j]);
 getch();}
 for(i = 0;i<3;i++){
	for(int j=0;j<4;j++){
	scanf("%c",&a.p[i][j]);
	}
 }
 printf("%s\n",a.p);
 getch();
 for(i = 0;i<3;i++)
 for(j=0;j<4;j++){
 printf("%d %d %d\n",i,j,a.p[i][j]);
 getch();}
}

