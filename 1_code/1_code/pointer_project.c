//#include <stdio.h>
//#include <time.h>
////물고기가 6마리가 있다.
////이들은 어항에 살고 있는데, 사막이에요.
////사막이 너무 더워서, 너무 건조해서 물이 아주 빨리 증발을 해요
////물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고리를 살리는 프로젝트
////물고기는 시간이 지날수록 점점 커져서 나중에는 먹는거
//
//int level;
//int arrayfish[6];
//int* cursor;		//물고기 어항에 찾아가서 물을 주는 역할
//void printfishes();
//void initdata();
//void decreasewater(long elapsetime);
//int checkfishalive();
//
//int main(void)
//{
//	long starttime = 0;	//게임 시작 시간
//	long totaltime = 0;	//총 경과시간
//	long prevtime = 0;	//직전 경과시간(최근 물을 준 시간 간격)
//
//	int num;	//몇번어항에 물을 줄것인지, 사용자 입력하도록
//	initdata();
//
//	cursor = arrayfish;		//cursor[0] coursor[1]....
//
//	starttime = clock();		//현재 시간을 millisecond(1000분의 1초 단위로 반환)
//
//	while (1)
//	{
//		printfishes();
//		printf("몇 번 어항에 물을 주실껀가요?-> ");
//		scanf_s("%d", &num);
//
//		//입력값 체크
//		if (num < 1 || num>6)
//		{
//			printf("\n 입력값이 잘못되었습니다 \n");
//			continue;
//		}
//
//		//총 경과 시간
//		totaltime = (clock() - starttime) / CLOCKS_PER_SEC;
//		printf("총 경과 시간: %1d 초\n", totaltime);
//
//		//직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
//		prevtime = totaltime - prevtime;
//		printf("최근 경과 시간: %1d 초\n", prevtime);
//
//		//어항의 물을 감소(증발)
//		decreasewater(prevtime);
//
//		//사용자가 입력한 어항에 물을 준다
//		//1> 어항의 물이 0 이면? 물을 주지 않는다
//		if (cursor[num - 1] <= 0)
//		{
//			printf("%d 번 물고기는 이미 죽었습니다.. 물을 안줍니다.\n", num);
//		}
//
//		//2. 어항의 물이 0이 아닌 경우? 물을 준다! 단 100이 안넘도록
//		else if (cursor[num - 1] + 1 <= 100)
//		{
//			printf("%d 번 어항에 물을 줍니다\n\n", num);
//			cursor[num - 1] += 2;		//cursor[num - 1] = cursor[num-1]+1
//
//		}
//
//		//레벨업을 할 건지 확인(레벨업은 20초마다 한번씩!
//		if (totaltime / 20 > level - 1)
//		{
//			level = level + 1;		//level:1 ->level:2 -> level:3
//			printf("***축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드!! *** \n\n", level - 1, level);
//
//			if (level == 5)
//			{
//				printf("\n\n축하합니다. 최고 레벨을 달성하셨습니다. 게임을 종료합니다....\n\n");
//				exit(0);
//			}
//		}
//
//		//모든 물고기가 죽었는지 확인
//		if (checkfishalive() == 0)
//		{
//			//모두 죽음
//			printf("모든 물고기가 죽었습니다..\n");
//			exit(0);
//		}
//
//		else if (checkfishalive > 0)
//		{
//			//물고기가 한마리라도 살아있을경우
//			printf("물고기가 아직 살아있습니다.");
//		}
//		prevtime = totaltime;
//		
//		//10초 -> 15초(5초: prevtime->15초)  ->  25초 (10초...?)
//	
//	}
//
//
//	return 0;
//}
//
//void initdata()
//{
//	level = 1;		//게임레벨 (1~5)
//	for (int i = 0; i < 6; i++)
//	{
//		arrayfish[i] = 100;		//어항 물 높이 (0~100)
//	}
//
//}
//
//
//void printfishes()
//{
//	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n", 1, 2, 3, 4, 5, 6);
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
//		arrayfish[i] -= (level * 3 * (int)elapsetime);		//난이도 조절을 위한 값
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
//			return 1;		//하나라도 살아있으면 
//		}
//	}
//	return 0;
//}
