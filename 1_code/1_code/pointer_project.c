//#include <stdio.h>
//#include <time.h>
////����Ⱑ 6������ �ִ�.
////�̵��� ���׿� ��� �ִµ�, �縷�̿���.
////�縷�� �ʹ� ������, �ʹ� �����ؼ� ���� ���� ���� ������ �ؿ�
////���� �� �����ϱ� ���� �������� ���׿� ���� �༭ ������ �츮�� ������Ʈ
////������ �ð��� �������� ���� Ŀ���� ���߿��� �Դ°�
//
//int level;
//int arrayfish[6];
//int* cursor;		//����� ���׿� ã�ư��� ���� �ִ� ����
//void printfishes();
//void initdata();
//void decreasewater(long elapsetime);
//int checkfishalive();
//
//int main(void)
//{
//	long starttime = 0;	//���� ���� �ð�
//	long totaltime = 0;	//�� ����ð�
//	long prevtime = 0;	//���� ����ð�(�ֱ� ���� �� �ð� ����)
//
//	int num;	//������׿� ���� �ٰ�����, ����� �Է��ϵ���
//	initdata();
//
//	cursor = arrayfish;		//cursor[0] coursor[1]....
//
//	starttime = clock();		//���� �ð��� millisecond(1000���� 1�� ������ ��ȯ)
//
//	while (1)
//	{
//		printfishes();
//		printf("�� �� ���׿� ���� �ֽǲ�����?-> ");
//		scanf_s("%d", &num);
//
//		//�Է°� üũ
//		if (num < 1 || num>6)
//		{
//			printf("\n �Է°��� �߸��Ǿ����ϴ� \n");
//			continue;
//		}
//
//		//�� ��� �ð�
//		totaltime = (clock() - starttime) / CLOCKS_PER_SEC;
//		printf("�� ��� �ð�: %1d ��\n", totaltime);
//
//		//���� �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
//		prevtime = totaltime - prevtime;
//		printf("�ֱ� ��� �ð�: %1d ��\n", prevtime);
//
//		//������ ���� ����(����)
//		decreasewater(prevtime);
//
//		//����ڰ� �Է��� ���׿� ���� �ش�
//		//1> ������ ���� 0 �̸�? ���� ���� �ʴ´�
//		if (cursor[num - 1] <= 0)
//		{
//			printf("%d �� ������ �̹� �׾����ϴ�.. ���� ���ݴϴ�.\n", num);
//		}
//
//		//2. ������ ���� 0�� �ƴ� ���? ���� �ش�! �� 100�� �ȳѵ���
//		else if (cursor[num - 1] + 1 <= 100)
//		{
//			printf("%d �� ���׿� ���� �ݴϴ�\n\n", num);
//			cursor[num - 1] += 2;		//cursor[num - 1] = cursor[num-1]+1
//
//		}
//
//		//�������� �� ���� Ȯ��(�������� 20�ʸ��� �ѹ���!
//		if (totaltime / 20 > level - 1)
//		{
//			level = level + 1;		//level:1 ->level:2 -> level:3
//			printf("***�� ������! ���� %d �������� %d ������ ���׷��̵�!! *** \n\n", level - 1, level);
//
//			if (level == 5)
//			{
//				printf("\n\n�����մϴ�. �ְ� ������ �޼��ϼ̽��ϴ�. ������ �����մϴ�....\n\n");
//				exit(0);
//			}
//		}
//
//		//��� ����Ⱑ �׾����� Ȯ��
//		if (checkfishalive() == 0)
//		{
//			//��� ����
//			printf("��� ����Ⱑ �׾����ϴ�..\n");
//			exit(0);
//		}
//
//		else if (checkfishalive > 0)
//		{
//			//����Ⱑ �Ѹ����� ����������
//			printf("����Ⱑ ���� ����ֽ��ϴ�.");
//		}
//		prevtime = totaltime;
//		
//		//10�� -> 15��(5��: prevtime->15��)  ->  25�� (10��...?)
//	
//	}
//
//
//	return 0;
//}
//
//void initdata()
//{
//	level = 1;		//���ӷ��� (1~5)
//	for (int i = 0; i < 6; i++)
//	{
//		arrayfish[i] = 100;		//���� �� ���� (0~100)
//	}
//
//}
//
//
//void printfishes()
//{
//	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
//	for (int i = 0; i < 6; i++)
//	{
//		printf(" %4d ", arrayfish[i]);
//	}
//	printf("\n\n");
//
//}
//
//void decreasewater(long elapsetime)
//{
//	for (int i = 0; i < 6; i++)
//	{
//		arrayfish[i] -= (level * 3 * (int)elapsetime);		//���̵� ������ ���� ��
//		if (arrayfish[i] < 0)
//		{
//			arrayfish[i] = 0;
//		}
//
//	}
//}
//
//int checkfishalive()
//{
//	for (int i = 0; i < 6; i++)
//	{
//		if (arrayfish[i] > 0)
//		{
//			return 1;		//�ϳ��� ��������� 
//		}
//	}
//	return 0;
//}
