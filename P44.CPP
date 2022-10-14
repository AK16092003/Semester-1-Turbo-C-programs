#include<stdio.h>
void main(){
   char a[100] , b;
   int pos;
   printf("Enter character:"); scanf("%c",&b);
   printf("Enter position:"); scanf("%d",&pos);
   printf("Enter string:"); scanf("%s",a);

   a[pos] = b;
   printf("New String %s",a);


}