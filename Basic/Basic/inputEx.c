#define _CRT_SECURE_NO_WARNINGS  //scanf()의 보안 오류 처리
#include <stdio.h>
//입력 처리 - scanf()
int main()
{
	int iNum;
	float fNum;
	char str[40];  //문자열(배열)

	printf("정수 입력: ");
	scanf("%d", &iNum); //주소연산자(&) 앞에 붙임

	printf("입력된 정수: %d\n", iNum);
	printf("입력된 정수의 주소: %x\n", &iNum);

	printf("실수 입력: ");
	scanf("%f", &fNum);
	printf("입력된 실수: %f\n", fNum);
	printf("입력된 실수의 주소: %x\n", &fNum);

	//배열은 주소 연산자(&) 사용 안함
	printf("문자열 입력: ");
	scanf("%s", str);

	printf("입력된 문자열: %s\n", str);
	printf("입력된 실수의 주소: %x\n", str);
	return 0;
}