#include<stdio.h>
#include<conio.h>

struct student{
     char name[50];
     int roll;
     int age;
     char subject[50];

}s[5];

void main()
{
   clrscr();
   for(int i=0;i<5;i++){
	printf("Student %d \n",i+1);
	printf("Name : "); scanf("%s",s[i].name);
	printf("Roll number : "); scanf("%d",&s[i].roll);
	printf("Age : "); scanf("%d",&s[i].age);
	printf("Subject : "); scanf("%s",s[i].subject);
   }
   for(i = 0;i<5;i++){
	printf("Student %d \n",i+1);
	printf("Name : %s\n",s[i].name);
	printf("Roll number : %d\n",s[i].roll);
	printf("Age : %d\n",s[i].age);
	printf("Subject : %s\n",s[i].subject);
	getch();
   }


}