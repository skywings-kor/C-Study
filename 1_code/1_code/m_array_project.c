//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
////10������ ���� �ٸ� ����(�� ī�� 2�徿)
////����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
////��� ���� ���� ã���� ���� ����
////�� ���� Ƚ�� �˷��ֱ�
//
//int arrayanimal[4][5];		//��ü ī�� ����(20�� ī��)
//void initanimalarray();
//char* stranimal[10];
//void animalname();
//void shuffleanimal();
//int getemptyposition();
//
//
//
//int main(void)
//{
//	srand(time(NULL));
//	initanimalarray();
//	animalname();
//	
//	shuffleanimal();
//
//	return 0;
//}
//
//void initanimalarray()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arrayanimal[i][j] = -1;
//		}
//	}
//}
//
//void animalname()
//{
//	stranimal[0] = "������";
//	stranimal[1] = "�ϸ�";
//	stranimal[2] = "������";
//	stranimal[3] = "�����";
//	stranimal[4] = "����";
//	stranimal[5] = "�⸰";
//	stranimal[6] = "�ڳ���";
//	stranimal[7] = "�Ǿ�";
//	stranimal[8] = "����Ǳ�";
//	stranimal[9] = "�䳢";
//
//}
//
//void shuffleanimal()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			int pos = getemptyposition();
//			int x = conv_pos_y(pos);
//			int y = conv_pos_x(pos);
//
//			arrayanimal[x][y] = i;
//		}
//	}
//}
//
//int getemptyposition()
//{
//	//����������	0  1  2  3  4
//	//����������	5  6  7  8  9
//	//����������	10 11 12 13 14
//	//����������	15 16 17 18 19
//
//	while (1)
//	{
//		int randpos = rand() % 20;	//0~19 ���� ���ڸ� ��ȯ
//		//19 -> (3,4)
//		int x = conv_pos_x(randpos);
//		int y = conv_pos_y(randpos);
//		
//		if (arrayanimal[x][y] == -1)
//		{
//			return randpos;
//		}
//	}
//}
