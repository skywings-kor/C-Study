//#include <stdio.h>
//int main(void)
//{
//	srand(time(NULL));
//	printf("\n\n �ѤѤ� �ƺ��� ��Ӹ� ���� �ѤѤ�\n\n");
//
//	int answer;
//	int treatment = rand() % 8;		//�߸��� ����(0~7)
//
//	int countshowbottle = 0;		//�̹� ���ӿ� ������ �� ����
//	int prevcountshow = 0;		//�հ��ӿ� ������ �� ����
//
//	//���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ���(ó���� 2��-> ������ 3��)
//
//	//3���� ��ȸ(3���� �߸��� ���� �õ�)
//
//	for (int i = 0; i <= 7; i++)
//	{
//		int bottle[8] = { 0,0,0,0,0,0,0,0 };		//4���� ��
//
//		do 
//		{
//			countshowbottle = rand() % 4 +2;		//������ �� ����(0~1, +2 -> 2,3)
//		} while (countshowbottle == prevcountshow);
//		prevcountshow = countshowbottle;
//
//		int isinclude = 0;		//������ �� �߿� �߸����� ���ԵǾ����� ����		(1:���� 0:������)
//		printf("-> %d ��° �õ�: ", i+1);
//
//		for (int j = 0; j < countshowbottle; j++)
//		{
//			int randbottle = rand() % 8;
//
//			//���� ���õ��� ���� ���̸�, ���� ó��
//			if (bottle[randbottle] == 0)
//			{
//				bottle[randbottle] = 1;
//				if (randbottle == treatment)
//				{
//					isinclude = 1;
//				}
//			}
//			else
//			{
//				j--;
//			}
//		}
//
//		//����ڿ��� ���� ǥ��
//		for (int k = 0; k < 8; k++)
//		{
//			if (bottle[k] == 1)
//			{
//				printf("%d ", k + 1);
//			}
//		}
//
//		printf("������ �Ӹ��� �ٸ��ϴ�\n\n");
//
//		if (isinclude == 1)
//		{
//			printf(">>����! �Ӹ��� �����!\n");
//		}
//		else
//		{
//			printf(">>����! �Ӹ��� ���� �ʾҾ�� \n");
//		}
//
//		printf("\n ��� �Ϸ��� �ƹ�Ű�� ��������..");
//		getchar();
//
//	}
//	printf("\n\n �߸����� ����ϱ��=> ");
//	scanf_s("%d", &answer);
//
//	if (answer == treatment+1)
//	{
//		printf("\n >> �����Դϴ�");
//	}
//	else
//	{
//		printf("\n>> �� Ʋ�Ƚ��ϴ�. ������ %d �Դϴ�", treatment+1);
//	}
//
//
//	return 0;
//}