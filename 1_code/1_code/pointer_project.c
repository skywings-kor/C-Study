#include <stdio.h>
#include <time.h>
//����Ⱑ 6������ �ִ�.
//�̵��� ���׿� ��� �ִµ�, �縷�̿���.
//�縷�� �ʹ� ������, �ʹ� �����ؼ� ���� ���� ���� ������ �ؿ�
//���� �� �����ϱ� ���� �������� ���׿� ���� �༭ ������ �츮�� ������Ʈ
//������ �ð��� �������� ���� Ŀ���� ���߿��� �Դ°�

int level;
int arrayfish[6];
int* cursor;		//����� ���׿� ã�ư��� ���� �ִ� ����
void printfishes();
void initdata();

int main(void)
{
	long starttime = 0;	//���� ���� �ð�
	long totaltime = 0;	//�� ����ð�
	long prevtime = 0;	//���� ����ð�(�ֱ� ���� �� �ð� ����)

	int num;	//������׿� ���� �ٰ�����, ����� �Է��ϵ���
	initdata();

	cursor = arrayfish;		//cursor[0] coursor[1]....

	starttime = clock();		//���� �ð��� millisecond(1000���� 1�� ������ ��ȯ)

	while (1)
	{
		printfishes();
		printf("�� �� ���׿� ���� �ֽǲ�����?-> ");
		scanf_s("%d", &num);

		//�Է°� üũ
		if (num < 1 || num>6)
		{
			printf("\n �Է°��� �߸��Ǿ����ϴ� \n");
			continue;
		}

		//�� ��� �ð�
		totaltime = (clock() - starttime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð�: %1d ��\n", totaltime);

		//���� �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevtime = totaltime - prevtime;
		printf("�ֱ� ��� �ð�: %1d ��\n", prevtime);

		//������ ���� ����(����)
		decreasewater(prevtime);
	}


	return 0;
}

void initdata()
{
	level = 1;		//���ӷ��� (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayfish[i] = 100;		//���� �� ���� (0~100)
	}

}


void printfishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayfish[i]);
	}
	printf("\n\n");

}

void decreasewater(long elapsetime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayfish[i] -= (level * 3 * (int)elapsetime);
	}
}