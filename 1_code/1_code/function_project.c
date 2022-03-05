#include <stdio.h>
#include<time.h>

int getRandomnumber(int level);
void showquestion(int level, int num1, int num2);
void success();
void fail();


int main(void)
{

	//문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
	//맞히면 통과, 틀리면 실패!

	srand(time(NULL));
	int count = 0;

	for (int i = 1; i <= 5; i++)
	{
		//x+y=??

		int num1 = getRandomnumber(i);
		int num2 = getRandomnumber(i);

		/*printf("%d * %d =의 값은 얼마입니까?", num1, num2);*/

		showquestion(i, num1, num2);

		int answer = 0;
		scanf_s("%d",&answer);

		if (answer == -1)
		{
			printf("프로그램을 종료합니다");
			exit(0);
		}

		else if (answer == num1 * num2)
		{
			success();
			count++;
		}

		else
		{
			fail();
		}
	}

	printf("\n 당신은 5개의 비밀번호 중 %d 개를 맞췄습니다",count);

	return 0;
}


int getRandomnumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showquestion(int level, int num1, int num2)
{
	printf("\n\n\n########## %d 번째 비밀번호 ##########\n", level);
	printf("\n\t %d x %d 는? \n\n", num1, num2);

	printf("#############################\n");
	printf("\n 비밀번호를 입력하세요(종료: -1을 입력하시면 됩니다");
}

void success()
{
	printf("\n 정답입니다!");
}

void fail()
{
	printf("\n 틀렸습니다!");
}