//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
////10原軒税 辞稽 陥献 疑弘(唖 朝球 2舌梢)
////紫遂切稽採斗 2鯵税 脊径葵聖 閤焼辞 -> 旭精 疑弘 達生檎 朝球 及増奄
////乞窮 疑弘 瞬聖 達生檎 惟績 曽戟
////恥 叔鳶 判呪 硝形爽奄
//
//int arrayanimal[4][5];		//穿端 朝球 走亀(20舌 朝球)
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
//	stranimal[0] = "据周戚";
//	stranimal[1] = "馬原";
//	stranimal[2] = "悪焼走";
//	stranimal[3] = "壱丞戚";
//	stranimal[4] = "掬走";
//	stranimal[5] = "奄鍵";
//	stranimal[6] = "坪晦軒";
//	stranimal[7] = "焦嬢";
//	stranimal[8] = "奄艦杷益";
//	stranimal[9] = "塘晦";
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
//	//けけけけけ	0  1  2  3  4
//	//けけけけけ	5  6  7  8  9
//	//けけけけけ	10 11 12 13 14
//	//けけけけけ	15 16 17 18 19
//
//	while (1)
//	{
//		int randpos = rand() % 20;	//0~19 紫戚 収切研 鋼発
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
