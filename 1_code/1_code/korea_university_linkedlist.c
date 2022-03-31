#include <stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
void II_input(), II_print(), II_update(), II_delete();

struct NODE
{
	int ID;
	int value;
	struct NODE* next;		//새로 정해서 만든거기 때문에 struct를 쓰는 것이다

} *head, * tail, * ptr;

int main(void)
{
	head = NULL;
	int index = 0;
	int flag = 0;

	while (flag == 0)
	{
		printf("Enter [(1)Input,(2)Print,(3)Update,(4)Delete,(5)Exit]: ");
		scanf_s("%d", &index);

		if (index == 1)
		{
			II_input();
		}
		else if (index == 2)
		{
			II_print();
		}
		else if (index == 3)
		{
			II_update();
		}
		else if (index == 4)
		{
			II_delete();
		}
		else if (index == 5)
		{
			printf("Exit this program \n");
			flag = 1;		//0이 아니라 1이기때문에 while 돌지 않고 바로 빠져나감
		}
		else
		{
			printf("Enter again (between1 and 5) \n");
		}

	}

	return 0;
}

void II_input()
{
	int in_ID; 
	int in_value;
	
	printf("\t ID, value: ");
	scanf("%d %d", &in_ID ,&in_value);
	ptr = (struct NODE*)malloc(sizeof(struct NODE));

	if (head == NULL)
	{
		head = ptr;
	}
	else
	{
		tail->next = ptr;
	}

	ptr->ID = in_ID;
	ptr->value = in_value;
	ptr->next = NULL;

	tail = ptr;
	II_print();

}

void II_print()
{
	ptr = head;
	printf("ID, Values: ");
	while (ptr != NULL)
	{
		printf("%d , %d \n", ptr->ID, ptr->value);
		ptr = ptr->next;
	}
	printf("\n");
}

void II_update()
{
	char update_ID;
	int update_value;
		
	printf("\t ID for update: ");
	scanf("%d", &update_ID);
	ptr = head;
	
	while (ptr != NULL)
	{
		if (ptr->ID == update_ID)
		{
			printf("\t Enter the value for this ID: ");
			scanf("%d", &update_value);
			ptr->value = update_value;		//ptr->value 값에 들어있던것을 새로 사용자가 입력한 값을 넣는 구간
			II_print();
			return;		//업데이트하고 딱 프로그램 끝남
		}

		ptr = ptr->next;
	}
}

void II_delete()
{
	//세컨드 노드로 헤드르 옮기고 삭제해야함
	//마지막 노드 삭제.. tail을 그 전 노드로 옮기고 (하나 앞으로) (n-1)
	//중간에 있는 애를 없앤다하면 2를 삭제한 다음에 2번째가 있었던 애를 주소 없애고 3번째 주소를 입력해준다
	
	char delete_ID;
	printf("\t ID for delete: ");
	scanf("%d", &delete_ID);
	ptr = head;

	if (ptr->ID == delete_ID)
	{
		//Delete 첫번째 노드일경우
		head = ptr->next;		//헤드가 포인트 다음 노드로 가리키게 만든다
		free(ptr); //가르킨 첫번째 포인터는 메모리 반남(자유, 삭제)		안하면 쓰레기 값 생김
		II_print();
		return;
	}

	struct NODE* tmp;		//tmp임시 변수 하나 만들고
	while (ptr != NULL)
	{
		//다른것들
		tail = ptr;
		ptr = ptr->next;	//ptr을 두번째 노드를 가리키게 만듬

		if (ptr->ID == delete_ID)
		{
			tail->next = ptr->next;
			tmp = tail;		//템프도 첫번째 노드를 가리키게 됨
			free(ptr);
			
			while (tail->next != NULL)		//tail이라는 포인터를 마지막까지 찾아가서 가리키는 것을 바꿔주려는거
			{
				tail = tmp;
				tmp = tmp->next;
			}
			II_print();
			return;

		}

	}
}