#include <stdio.h>

int main(void)
{
	////배열
	//int subway_1 = 30;		//지하철 1호차에 30명이 타고 있다
	//int subway_2 = 40;
	//int subway_3 = 50;
	//
	//printf("지하철 1호차에 %d 명이 타고 있습니다 \n",subway_1);
	//printf("지하철 2호차에 %d 명이 타고 있습니다 \n", subway_2);
	//printf("지하철 3호차에 %d 명이 타고 있습니다 \n", subway_3);

	//int subway_array[3];		//배열은 0부터 시작해서 0 1 2 이렇게 생성된것이다
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i <=2 ; i++)
	//{
	//	printf("지하철 %d 호차에 %d 명이 타고있습니다 \n", i + 1, subway_array[i]);
	//}


	//값 설정 방법
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", arr[i]);
	}*/

	////배열 크기는 항상 상수로 선언!
	//int size = 10;
	//int arr[10];

	//int arr[10] = { 1,2 };		//3번째 값부터는 자동으로 0으로 초기화 됨
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d \n", arr[i]);
	//}

	//int arr[] = { 1,2 };	//arr[2]로 선언한 것과 똑같음

	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f \n", arr_f[i]);
	}*/


	//문자 vs 문자열(한글자 이상의 여러글자)
	/*char c = 'A';
	printf("%c \n", c);*/

	//6으로 했을때 오류나는 이유는 문자열 끝에는 '끝'을 의미하는 NULL문자 꼭 항상 포함되있어서 그렇다
	/*char str[7] = "coding";
	printf("%s", str);*/

	//char str[] = "coding";
	///*printf("%s\n", str);
	//printf("%d\n", sizeof(str));*/

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	
	//영어 1글자 : 1byte
	//한글 1글자 : 2byte

	//char 크기: 1byte



	return 0;
}