#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_first();
struct node{
	int number;
	struct node *next;
};

void print_ll(struct node *head){
	while(head->next != NULL)
	{
		printf("%d\n",head->number);
		head = head->next;
	}
}

void main()
{
	clrscr();
	struct node *head;
	insert_first();
	getch();
}
void insert_first(){
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node))
	scanf("%d",&new->number);
	new->next = head;
	head = new;
}