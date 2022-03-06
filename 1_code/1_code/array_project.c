//#include <stdio.h>
//int main(void)
//{
//	srand(time(NULL));
//	printf("\n\n ㅡㅡㅡ 아빠는 대머리 게임 ㅡㅡㅡ\n\n");
//
//	int answer;
//	int treatment = rand() % 8;		//발모제 선택(0~7)
//
//	int countshowbottle = 0;		//이번 게임에 보여줄 병 개수
//	int prevcountshow = 0;		//앞게임에 보여준 병 개수
//
//	//서로 보여주는 병 개수를 다르게 하여 정답률 향상(처음에 2개-> 다음에 3개)
//
//	//3번의 기회(3번의 발모제 투여 시도)
//
//	for (int i = 0; i <= 7; i++)
//	{
//		int bottle[8] = { 0,0,0,0,0,0,0,0 };		//4개의 병
//
//		do 
//		{
//			countshowbottle = rand() % 4 +2;		//보여줄 병 개수(0~1, +2 -> 2,3)
//		} while (countshowbottle == prevcountshow);
//		prevcountshow = countshowbottle;
//
//		int isinclude = 0;		//보여줄 병 중에 발모제가 포함되었는지 여부		(1:포함 0:불포함)
//		printf("-> %d 번째 시도: ", i+1);
//
//		for (int j = 0; j < countshowbottle; j++)
//		{
//			int randbottle = rand() % 8;
//
//			//아직 선택되지 않은 병이면, 선택 처리
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
//		//사용자에게 문제 표시
//		for (int k = 0; k < 8; k++)
//		{
//			if (bottle[k] == 1)
//			{
//				printf("%d ", k + 1);
//			}
//		}
//
//		printf("물약을 머리에 바릅니다\n\n");
//
//		if (isinclude == 1)
//		{
//			printf(">>성공! 머리가 났어요!\n");
//		}
//		else
//		{
//			printf(">>실패! 머리가 나지 않았어요 \n");
//		}
//
//		printf("\n 계속 하려면 아무키나 누르세요..");
//		getchar();
//
//	}
//	printf("\n\n 발모제는 몇번일까요=> ");
//	scanf_s("%d", &answer);
//
//	if (answer == treatment+1)
//	{
//		printf("\n >> 정답입니다");
//	}
//	else
//	{
//		printf("\n>> 땡 틀렸습니다. 정답은 %d 입니다", treatment+1);
//	}
//
//
//	return 0;
//}