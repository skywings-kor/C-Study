//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning (disable:4996)
//
//void ll_input();
//void II_print();
////�������� ��ũ�� ����Ʈ������������ ��ũ�� ����Ʈ������������ ��ũ�� ����Ʈ������������ ��ũ�� ����Ʈ������������ ��ũ�� ����Ʈ����
//typedef struct node
//{
//	char data;
//	struct node* next;
//
//}NODE;
//
//struct NODE
//{
//	char data;
//	struct NODE* next;		//���� ���ؼ� ����ű� ������ struct�� ���� ���̴�
//
//} *current, * follow, * newnode;
//
//void main()
//{
//	NODE* list;
//	NODE* temp;
//
//	list = (NODE*)malloc(sizeof(NODE));
//	list->data = NULL;
//	list->data = 'a';
//
//	temp = list;
//	temp->next = (NODE*)malloc(sizeof(NODE));
//
//	temp = temp->next;
//	temp->data = 'b';
//	temp->next = (NODE*)malloc(sizeof(NODE));
//
//	temp = temp->next;
//	temp->data = 'c';
//	temp->next = NULL;
//
//	temp = list;
//
//	ll_input();
//
//	while (temp != NULL)
//	{
//		printf("%5c\n", temp->data);
//		temp = temp->next;
//	}
//
//}
//
//
//void ll_input()
//{
//	char in_ID;
//	NODE* current = NULL;
//	NODE* follow = NULL;
//	NODE* newnode = NULL;
//	printf("\t ID: ");
//	scanf_s("%c", &in_ID);
//
//	if ((newnode = (NODE*)malloc(sizeof(NODE))) == NULL)
//	{
//		printf("No memory allocated \n");
//		return NULL;	
//	}
//
//	if (current == NULL)
//	{
//		current = newnode;
//	}
//	else
//	{
//		follow->next = newnode;
//	}
//
//	newnode->data = in_ID;
//
//	newnode->next = NULL;
//
//	follow = newnode;
//}
//
//void II_print()
//{
//	newnode = current;
//	printf("ID: ");
//	while (newnode != NULL)
//	{
//		printf("%d \n", newnode->data);
//		newnode = newnode->next;
//	}
//	printf("\n");
//}
////
//// 
//// 
//// 
//////���� ��ũ�� ����Ʈ �߰�
////
////NODE* insert(char item, NODE* list)
////{
////	item = "d";
////	NODE* current = NULL;
////	NODE* follow = NULL;
////	NODE* newnode = NULL;
////
////	current = follow = list;
////
////	if ((newnode = (NODE*)malloc(sizeof(NODE))) == NULL)
////	{
////		printf("No memory allocated \n");
////		return NULL;	
////	}
////	newnode->data = item;
////
////	while ((current != NULL) && (current->data < item))
////	{
////		follow = current;
////		current = current->next;
////	}
////
////	newnode->next = current;
////
////	if (current == list)
////	{
////		list = newnode;
////	}
////
////	else
////	{
////		follow->next = newnode;
////	}
////
////	return list;
////
////}