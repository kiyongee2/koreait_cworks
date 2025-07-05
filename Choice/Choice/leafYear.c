#define _CRT_SECURE_NO_WARNINGS //scanf() - 보안 처리
#include <stdio.h>
/*
    윤년(2월 29일까지 있는해) 판정
	- 4년에 한번 윤년이 있고, 100의 배수는 윤년이 아니다.
	- 400년에 한번 윤년이다.
*/
int main()
{
	int year;

	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0) {
		printf("윤년입니다.\n");
	}
	else {
		printf("윤년이 아닙니다.\n");
	}

	return 0;
}