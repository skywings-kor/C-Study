#include<stdio.h>

//����
void p(int num);

int main(void)
{
	//����
	int num = 2;
	printf("num�� %d �Դϴ�\n", num);

	//2+3��?
	num = num + 3;
	printf("num �� %d �Դϴ�\n", num);

	//5-1��?
	num = num - 1;
	printf("num�� %d �Դϴ�\n", num);

	//4x3��?
	num = num * 3;
	printf("num�� %d �Դϴ�\n", num);

	//12/6��?
	num = num / 6;
	printf("num�� %d �Դϴ�\n", num);

	return 0;
}

//����
void p(int num)
{
	printf("num�� %d �Դϴ�\n",num); 
}