#include<stdio.h>

//선언
void p(int num);
void function_without_return();
int function_with_return();
void funtion_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate);		//전체 total 에서 ate 개를 빼고 남은 수를 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mu1(int num1, int num2);
int div(int num1, int num2);


int main(void)
{

	////계산기
	//int num = 2;
	//printf("num은 %d 입니다\n", num);

	////2+3은?
	//num = num + 3;
	//printf("num 은 %d 입니다\n", num);
	//p(num);

	////5-1은?
	//num = num - 1;
	//printf("num은 %d 입니다\n", num);
	//p(num);

	////4x3은?
	//num = num * 3;
	//printf("num은 %d 입니다\n", num);
	//p(num);

	////12/6은?
	//num = num / 6;
	//printf("num은 %d 입니다\n", num);
	//p(num);

	//함수 종류
	//반환값이 없는 함수
	/*function_without_return();*/
	
	//반환값이 있는 함수
	/*int ret = function_with_return();
	p(ret);*/

	//파라미터(전달값)가 없는 함수
	/*funtion_without_params();*/

	//파라미터(전달값)가 있는 함수
	/*function_with_params(35,21,22);*/

	//파라미터(전달값)도 받고, 반환값이 있는 함수
	/*int ret = apple(5, 2);*/		//예: 5개의 사과중에서 2개를 먹었어요.
	/*printf("사과 5개중에 2개를 먹으면 %d개가 남아요", ret);*/
	/*printf("사과 %d 개 중에 %d 개를 먹으면 %d개가 남아요", 10, 4, apple(10, 4));*/


	//계산기 함수
	
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mu1(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	return 0;
}



//정의
void p(int num)
{
	printf("num은 %d 입니다\n",num); 
}
//전달값 96
//함수: ㅁ+4
//반환형: ?

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

//반환값이 있는 함수

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void funtion_without_params()
{
	printf("전달값이 없는 함수입니다.");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수는 %d %d %d 입니다", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mu1(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}