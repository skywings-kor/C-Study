#include<stdio.h>

//선언
void p(int num);

int main(void)
{
	//계산기
	int num = 2;
	printf("num은 %d 입니다\n", num);

	//2+3은?
	num = num + 3;
	printf("num 은 %d 입니다\n", num);

	//5-1은?
	num = num - 1;
	printf("num은 %d 입니다\n", num);

	//4x3은?
	num = num * 3;
	printf("num은 %d 입니다\n", num);

	//12/6은?
	num = num / 6;
	printf("num은 %d 입니다\n", num);

	return 0;
}

//정의
void p(int num)
{
	printf("num은 %d 입니다\n",num); 
}