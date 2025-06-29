#define _CRT_SECURE_NO_WARNINGS  //scanf() 보안 처리
#include <stdio.h>
/*
	1부터 5까지 곱하기
	1x2x3x4x5 = 5!(팩토리얼)
	gob = 1
	gob = gob * 1
*/
int main()
{
	int gob = 1; //곱한 결과값
	int num;     //곱할 종료값

	printf("몇 까지 곱할까요? ");
	scanf("%d", &num); //입력시엔 주소연산자(&) 붙임

	for (int i = 1; i <= num; i++) {
		gob *= i; //gob = gob * i;
		//printf("i = %d, gob = %d\n", i, gob);
	}

	printf("결과값: %d\n", gob);

	return 0;
}