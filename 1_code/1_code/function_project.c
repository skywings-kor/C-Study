#include <stdio.h>
#include<time.h>

int getRandomnumber(int level);
void showquestion(int level, int num1, int num2);
void success();
void fail();


int main(void)
{

	//���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ����
	//������ ���, Ʋ���� ����!

	srand(time(NULL));
	int count = 0;

	for (int i = 1; i <= 5; i++)
	{
		//x+y=??

		int num1 = getRandomnumber(i);
		int num2 = getRandomnumber(i);

		/*printf("%d * %d =�� ���� ���Դϱ�?", num1, num2);*/

		showquestion(i, num1, num2);

		int answer = 0;
		scanf_s("%d",&answer);

		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�");
			exit(0);
		}

		else if (answer == num1 * num2)
		{
			success();
			count++;
		}

		else
		{
			fail();
		}
	}

	printf("\n ����� 5���� ��й�ȣ �� %d ���� ������ϴ�",count);

	return 0;
}


int getRandomnumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showquestion(int level, int num1, int num2)
{
	printf("\n\n\n########## %d ��° ��й�ȣ ##########\n", level);
	printf("\n\t %d x %d ��? \n\n", num1, num2);

	printf("#############################\n");
	printf("\n ��й�ȣ�� �Է��ϼ���(����: -1�� �Է��Ͻø� �˴ϴ�");
}

void success()
{
	printf("\n �����Դϴ�!");
}

void fail()
{
	printf("\n Ʋ�Ƚ��ϴ�!");
}