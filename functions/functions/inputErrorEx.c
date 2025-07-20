#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    숫자 입력시 문자 입력 오류 처리
*/
int getValidInt() {
	int num, result;

	while (1) {
		puts("정수를 입력하세요:");
		result = scanf("%d", &num); //숫자 입력-1, 문자 입력-0
		//printf("result = %d\n", result);
		if (result) { //result == 1
			return num;  //num 값을 호출한 곳에 반환함
		}
		else { //result == 0
			puts("유효한 정수를 입력하세요.");
			while (getchar() != '\n'); //'\n' 앞에 입력된 모든 문자 제거(비움)
		}
	}
}

int main()
{
	int number;

	number = getValidInt();
	printf("입력된 숫자: %d\n", number);

	return 0;
}