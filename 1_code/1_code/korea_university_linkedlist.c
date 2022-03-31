#include <stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
void II_input(), II_print(), II_update(), II_delete();

struct NODE
{
	int ID;
	int value;
	struct NODE* next;		//���� ���ؼ� ����ű� ������ struct�� ���� ���̴�

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
			flag = 1;		//0�� �ƴ϶� 1�̱⶧���� while ���� �ʰ� �ٷ� ��������
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
			ptr->value = update_value;		//ptr->value ���� ����ִ����� ���� ����ڰ� �Է��� ���� �ִ� ����
			II_print();
			return;		//������Ʈ�ϰ� �� ���α׷� ����
		}

		ptr = ptr->next;
	}
}

void II_delete()
{
	//������ ���� ��帣 �ű�� �����ؾ���
	//������ ��� ����.. tail�� �� �� ���� �ű�� (�ϳ� ������) (n-1)
	//�߰��� �ִ� �ָ� ���ش��ϸ� 2�� ������ ������ 2��°�� �־��� �ָ� �ּ� ���ְ� 3��° �ּҸ� �Է����ش�
	
	char delete_ID;
	printf("\t ID for delete: ");
	scanf("%d", &delete_ID);
	ptr = head;

	if (ptr->ID == delete_ID)
	{
		//Delete ù��° ����ϰ��
		head = ptr->next;		//��尡 ����Ʈ ���� ���� ����Ű�� �����
		free(ptr); //����Ų ù��° �����ʹ� �޸� �ݳ�(����, ����)		���ϸ� ������ �� ����
		II_print();
		return;
	}

	struct NODE* tmp;		//tmp�ӽ� ���� �ϳ� �����
	while (ptr != NULL)
	{
		//�ٸ��͵�
		tail = ptr;
		ptr = ptr->next;	//ptr�� �ι�° ��带 ����Ű�� ����

		if (ptr->ID == delete_ID)
		{
			tail->next = ptr->next;
			tmp = tail;		//������ ù��° ��带 ����Ű�� ��
			free(ptr);
			
			while (tail->next != NULL)		//tail�̶�� �����͸� ���������� ã�ư��� ����Ű�� ���� �ٲ��ַ��°�
			{
				tail = tmp;
				tmp = tmp->next;
			}
			II_print();
			return;

		}

	}
}