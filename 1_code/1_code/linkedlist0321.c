////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////#pragma warning (disable:4996)
////
////void user_input();
////void user_print();
////void user_del();
////
////struct node
////{
////	char id;
////	struct node* next;
////}*head,*tail,*ptr;
////
//////typedef struct node
//////{
//////	char data;
//////	struct node* next;
//////
//////}node;
//////
////
////
////
////int main(void)
////{
////	head = NULL;
////	int user;
////	int flag = 0;
////	while (flag == 0)
////	{
////		printf("원하시는 항목을 택하세요.(1:리스트 추가, 2:리스트 출력, 3:리스트 삭제)");
////		scanf_s("%d",&user);
////
////		if (user == 1)
////		{
////			user_input();
////		}
////
////		else if (user == 2)
////		{
////			user_print();
////		}
////
////		else if (user == 3)
////		{
////			user_del();
////		}
////	}
////
////
////
////	return 0;
////}
////
////void user_input(/*char item,node*list*/)
////{
////	/*node* current = null, * follow = null, * newnode = null;
////	current = follow = list;*/
////
////	char userin;
////	printf("입력할 단어를 넣어주세요-> ");
////	scanf("%c", &userin);
////
////	ptr = (struct node*)malloc(sizeof(struct node));
////
////
////	while ((head != NULL) && (head->next < userin))
////	{
////		tail = head;
////		head = head->next;
////	}
////
////	ptr->next = head;
////
////	
////	user_print();
////	//newnode->data = item;
////	//while ((current != null) && (current->next < item))
////	//{
////	//	follow = current;
////	//	current = current->next;
////	//}
////
////	//newnode->next = current;
////	//if (current == list)
////	//{
////	//	list = newnode;
////	//}
////
////	//else
////	//{
////	//	follow->next = newnode;
////	//}
////
////
////}
////
////void user_print()
////{
////	ptr = head;
////	printf("ID, Values: ");
////	while (ptr != NULL)
////	{
////		printf("%s \n", ptr->id);
////		ptr = ptr->next;
////	}
////	printf("\n");
////}
////
////void user_del()
////{
////
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning (disable:4996)
//
//typedef struct node 
//{
//	char data;
//	struct node* next;
//} NODE;
//
//
//int main(NODE* list)
//{
//	//NODE* list, * temp; // line #1
//	//list = (NODE*)malloc(sizeof(NODE)); // line #2
//	//list->data = 'a'; // line #3
//	//temp = list; // line #4
//	//temp->next = (NODE*)malloc(sizeof(NODE)); // line #5
//
//	//temp = temp->next; // line #6
//	//temp->data = 'b'; // line #7
//	//temp->next = (NODE*)malloc(sizeof(NODE));
//	//// line #8
//	//temp = temp->next; // line #9
//	//temp->data = 'c'; // line #10
//	//temp->next = NULL; // line #11
//	//// 연결리스트의 출력
//	//temp = list;
//	//while (temp != NULL) 
//	//{
//	//	printf("%5c\n", temp->data);
//	//	temp = temp->next;
//	//}
//
//	char item = "";
//	
//	NODE* current = NULL, * follow = NULL, * newnode = NULL;
//	current = follow = list;
//
//	if ((newnode = (NODE*)malloc(sizeof(NODE))) == NULL) {
//		printf("No memory allocated..\n");
//		return NULL;
//	}
//	
//	printf("값 입력해주세요-> ");
//	scanf("%c", &item);
//
//	newnode->data = item;
//	while ((current != NULL) && (current->data < item)) 
//	{
//		follow = current;
//		current = current->next;
//	}
//
//	newnode->next = current;
//	if (current == list)
//	{
//		list = newnode; //insert as first node
//	}
//
//	else
//	{
//		follow->next = newnode; // insert into middle or end
//	}
//	return 0;
//}