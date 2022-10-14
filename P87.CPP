#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student{
	int roll_number;
	char name[50];
	int marks[5];
};
void main()
{
    clrscr();
    int n = 2;
    struct student *p = (struct student *)malloc(n*sizeof(struct student));
    for(int i =0 ; i < n ; i ++){
	printf("Enter student %d details : \n",(i+1));
	printf("Roll Number : ");scanf("%d",&(p+i)->roll_number);
	printf("Name : ");scanf("%s",(p+i)->name);
	for(int j = 0 ; j < 5 ; j++)
	{
		printf("Marks %d : ",j+1);scanf("%d",&(p+i)->marks[j]);
	}
    }

    printf("\nPrinting Details : \n\n");
    for(i =0 ; i < n ; i ++){
	printf("student %d details : \n",(i+1));
	printf("Roll Number : %d\n",(p+i)->roll_number);
	printf("Name : %s\n",(p+i)->name);
	for(int j = 0 ; j < 5 ; j++)
	{
		printf("Marks %d = %d\n",j+1 , (p+i)->marks[j]);

	}
    }
    getch();

}