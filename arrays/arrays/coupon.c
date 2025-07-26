#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//민생회복 지원금 신청 프로그램
int main()
{
	char birthYear[5];  //출생연도 - 4자리 + 널문자
	char lastDigit;     //출생연도 끝자리

	printf("출생연도 입력: ");
	scanf("%s", birthYear);

	if (strlen(birthYear) != 4) {
		printf("출생연도는 4자리 입니다. 다시 입력하세요\n");
		return 1;  //즉시 종료
	}

	//출생연도의 끝자리와 비교(if, switch)
	lastDigit = birthYear[3]; //예) 2005 -> '5'(끝자리)

	switch (lastDigit) {
	case '1': case '6':
		printf("신청일은 월요일입니다.");
		break;
	case '2': case '7':
		printf("신청일은 화요일입니다.");
		break;
	case '3': case '8':
		printf("신청일은 수요일입니다.");
		break;
	case '4': case '9':
		printf("신청일은 목요일입니다.");
		break;
	case '5': case '0':
		printf("신청일은 금요일입니다.");
		break;
	default :
		printf("유효하지 않은 입력입니다.");
	}

	return 0;
}