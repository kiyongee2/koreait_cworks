#include <stdio.h>

/*
	if(조건식){ 실행문 }
	- 조건: 나이가 15세 이상이면 "관람가 등급" 출력
	- 변수: 메모리에 데이터(숫자, 문자)를 저장하는 공간(값 1개)
	- 비교 연산자 : >, <, ==, !=
*/

int main()
{
	//변수 선언 및 저장(초기화)
	int age = 14;

	printf("%d\n", age >= 15);  //1, 참(1), 거짓(0)
	//조건 연산자 - (조건식) ? 참 : 거짓
	int value = (age >= 15) ? 1 : 0;
	printf("%d\n", value);  //1

	if (age >= 15) {
		printf("관람가 등급\n");
	}
	else { //else if(age < 15)
		printf("관람불가 등급\n");
	}
	//나이 출력
	printf("나이는 %d세입니다.\n", age);

	return 0;
}