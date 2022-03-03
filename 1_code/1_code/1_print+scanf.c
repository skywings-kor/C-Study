//#include <stdio.h>
//int main_printfscanf (void)
//{
//	//정수형 변수에 대한 예제
//	/*int age = 12;
//	printf("%d \n", age);
//	age = 13;
//	printf("%d \n", age);*/
//
//
//	//실수형 변수에 대한 예제
//	//float f = 46.5;
//	//printf("%.2f \n", f);
//
//	//double d = 4.428;
//	//printf("%.2f \n", d);
//
//
//	//상수
//	//const int year = 2000;
//	//printf("태어난 년도: %d \n", year);
//	////year = 2001;
//	
//
//	//printf
//	//연산
//	//int add = 3 + 7;
//	//printf("3+7= %d \n", add);
//	//printf("%d * %d = %d \n", 30, 79, 30 * 79);
//
//
//	//scanf
//	//키보드 입력을 받아서 저장
//	/*int ipt;
//	printf("값을 입력하세요: ");
//	scanf_s("%d", &ipt);
//	printf("입력값: %d \n", ipt);*/
//
//	//int one, two, three;
//	//printf("3개의 정수를 입력하세요: ");
//	//scanf_s("%d %d %d", &one, &two, &three);
//
//	//printf("첫번째 값: %d \n", one);
//	//printf("두번째 값: %d \n", two);
//	//printf("세번째 값: %d \n", three);
//
//	//문자(한글자), 문자열(한글자이상의 여러 글자)
//	/*char c = 'A';
//	printf("%c \n", c);
//	*/
//	
//	/*char str[256];
//	scanf_s("%s", str,sizeof(str));
//	printf("%s \n", str);*/
//
//
//
//	//프로젝트
//	//간단 정보 입력 및 출력
//	char name[256];
//	printf("이름이 뭐에요? ");
//	scanf_s("%s", name, sizeof(name));
//
//	int age;
//	printf("나이는 몇이에요? ");
//	scanf_s("%d", &age);
//
//	float weight;
//	printf("몸무게는 몇이에요? ");
//	scanf_s("%f", &weight);
//
//	double height;
//	printf("키는 몇이에요? ");
//	scanf_s("%lf", &height);
//
//	char what[256];
//	printf("무슨 범죄를 하셨나요? ");
//	scanf_s("%s", what, sizeof(what));
//
//	//최종 입력한것들 출력구간
//	printf("\n\nㅡㅡ 범죄자 정보 ㅡㅡ \n\n");
//	printf("이름           : %s \n", name);
//	printf("나이           : %d \n", age);
//	printf("몸무게         : %.1f \n", weight);
//	printf("키             : %.1lf \n", height);
//	printf("범죄           : %s \n", what);
//
//
//	return 0;
//
//
//}