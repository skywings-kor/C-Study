//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
////10마리의 서로 다른 동물(각 카드 2장씩)
////사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
////모든 동물 쌍을 찾으면 게임 종료
////총 실패 횟수 알려주기
//
//int arrayanimal[4][5];		//전체 카드 지도(20장 카드)
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
//	stranimal[0] = "원숭이";
//	stranimal[1] = "하마";
//	stranimal[2] = "강아지";
//	stranimal[3] = "고양이";
//	stranimal[4] = "돼지";
//	stranimal[5] = "기린";
//	stranimal[6] = "코끼리";
//	stranimal[7] = "악어";
//	stranimal[8] = "기니피그";
//	stranimal[9] = "토끼";
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
//	//ㅁㅁㅁㅁㅁ	0  1  2  3  4
//	//ㅁㅁㅁㅁㅁ	5  6  7  8  9
//	//ㅁㅁㅁㅁㅁ	10 11 12 13 14
//	//ㅁㅁㅁㅁㅁ	15 16 17 18 19
//
//	while (1)
//	{
//		int randpos = rand() % 20;	//0~19 사이 숫자를 반환
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
