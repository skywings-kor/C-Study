#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
typedef struct node
{
	char data;
	struct node* next;
}NODE;

void main()
{
	NODE* list;
	NODE* temp;

	list = (NODE*)malloc(sizeof(NODE));
	list->data = NULL;
	list->data = 'a';

	temp = list;
	temp->next = (NODE*)malloc(sizeof(NODE));

	temp = temp->next;
	temp->data = 'b';
	temp->next = (NODE*)malloc(sizeof(NODE));

	temp = temp->next;
	temp->data = 'c';
	temp->next = NULL;

	temp = list;
	while (temp != NULL)
	{
		printf("%5c\n", temp->data);
		temp = temp->next;
	}

}