#include<stdio.h>
#include<conio.h>
struct student{
	char name[50];
	int age;
	int marks[5];
	int roll_no;
};

void main()
{
 clrscr();
 struct student stud[2];
 for(int i=0;i<2;i++){
	printf("Student %d\n",i+1);
	printf("Enter name : ");scanf("%s",stud[i].name);
	printf("Enter age : ");scanf("%d",&stud[i].age);
	printf("Enter roll number : ");scanf("%d",&stud[i].roll_no);

	for(int j = 0;j<5;j++){
		printf("Marks in subject %d :",j+1);scanf("%d",&stud[i].marks[j]);
	}

 }
 printf("\n");
 for(i=0;i<2;i++){
	printf("Student %d\n",i+1);
	printf("Enter name : ");printf("%s\n",stud[i].name);
	printf("Enter age : ");printf("%d\n",stud[i].age);
	printf("Enter roll number : ");printf("%d\n",stud[i].roll_no);

	for(int j = 0;j<5;j++){
		printf("Marks in subject %d :",j+1);printf("%d\n",stud[i].marks[j]);
	}

	getch();
 }


}

