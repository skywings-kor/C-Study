//#include <stdio.h>

//int main(void)
//{
//	////�迭
//	//int subway_1 = 30;		//����ö 1ȣ���� 30���� Ÿ�� �ִ�
//	//int subway_2 = 40;
//	//int subway_3 = 50;
//	//
//	//printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ� \n",subway_1);
//	//printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ� \n", subway_2);
//	//printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ� \n", subway_3);
//
//	//int subway_array[3];		//�迭�� 0���� �����ؼ� 0 1 2 �̷��� �����Ȱ��̴�
//	//subway_array[0] = 30;
//	//subway_array[1] = 40;
//	//subway_array[2] = 50;
//
//	//for (int i = 0; i <=2 ; i++)
//	//{
//	//	printf("����ö %d ȣ���� %d ���� Ÿ���ֽ��ϴ� \n", i + 1, subway_array[i]);
//	//}
//
//
//	//�� ���� ���
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d \n", arr[i]);
//	}*/
//
//	////�迭 ũ��� �׻� ����� ����!
//	//int size = 10;
//	//int arr[10];
//
//	//int arr[10] = { 1,2 };		//3��° �����ʹ� �ڵ����� 0���� �ʱ�ȭ ��
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d \n", arr[i]);
//	//}
//
//	//int arr[] = { 1,2 };	//arr[2]�� ������ �Ͱ� �Ȱ���
//
//	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%.2f \n", arr_f[i]);
//	}*/
//
//
//	//���� vs ���ڿ�(�ѱ��� �̻��� ��������)
//	/*char c = 'A';
//	printf("%c \n", c);*/
//
//	//6���� ������ �������� ������ ���ڿ� ������ '��'�� �ǹ��ϴ� NULL���� �� �׻� ���Ե��־ �׷���
//	/*char str[7] = "coding";
//	printf("%s", str);*/
//
//	//char str[] = "coding";
//	///*printf("%s\n", str);
//	//printf("%d\n", sizeof(str));*/
//
//	//for (int i = 0; i < sizeof(str); i++)
//	//{
//	//	printf("%c\n", str[i]);
//	//}
//
//	/*char kor[] = "�����ڵ�";
//	printf("%s\n", kor);
//	printf("%d\n", sizeof(kor));
//	*/
//	//���� 1���� : 1byte
//	//�ѱ� 1���� : 2byte
//
//	//char ũ��: 1byte
//
//
//	/*char c_array[7] = { 'c','o','d','i','n','g' };
//	printf("%s \n", c_array);*/
//
//	//char c_array[10] = { 'c','o','d','i','n','g' };
//	///*printf("%s\n", c_array);*/
//	///*for (int i = 0; i < sizeof(c_array); i++)
//	//{
//	//	printf("%c \n", c_array[i]);
//	//}*/
//
//
//	//for (int i = 0; i < sizeof(c_array); i++)
//	//{
//	//	printf("%d \n", c_array[i]);
//	//}
//
//
//	////���ڿ� �Է¹ޱ�: ������ ���� ���� ����
//	//char name[256];
//	//printf("�̸��� �Է����ּ���-> ");
//	//scanf_s("%s", name, sizeof(name));
//	//printf("%s\n", name);
//
//
//	//����: �ƽ�Ű�ڵ�? ANSI (�̱�ǥ����ȸ0���� ������ ǥ�� �ڵ� ü��
//	//7bit, �� 128�� �ڵ�(0~127)
//	//a: 97 (���� a�� �ƽ�Ű�ڱ� ������)
//	//A:65
//	//O:48
//
//
//	return 0;
//}

//
//int main(void)
//{
//	//�ƽ�Ű�ڵ� ����
//	printf("%c \n", 'a');
//	printf("%d \n", 'a');
//
//	printf("%c \n", 'b');
//	printf("%d \n", 'b');
//
//	printf("%c \n", '\0');
//	printf("%d \n", '\0');
//
//	//����2: 0~127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
//	for (int i = 0; i <= 127; i++)
//	{
//		printf("�ƽ�Ű�ڵ� ����: %d : %c \n", i, i);
//	}
//
//	return 0;
//}