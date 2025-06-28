#include <stdio.h>

/*
	중첩 if문 - if 안에 if문 
	- 조건: 어떤 수를 짝수와 홀수로 판정하는 프로그램
	- 2의 배수이면 짝수이고, 아니면 홀수이다.
	- 2의 배수는 2로 나눈 나머지가 0이다.(나누어 떨어진다)
	- x % 2 == 0(x를 2로 나눈 나머지는 0이다)
*/

int main()
{
	int num = 5;

	printf("%d\n", num); //5
	printf("%d\n", (num % 2 == 0)); //0
	//조건 연산자
	int value = (num % 2 == 0) ? 1 : 0;
	printf("%d\n", value); //0

	//조건문
	//어떤 수 10을 기준으로 함
	//10보다 큰 짝수/홀수, 10보다 작은 짝수/홀수 구분
	if (num >= 10) {
		if (num % 2 == 0) {
			printf("10보다 큰 짝수입니다.\n");
		}
		else {
			printf("10보다 큰 홀수입니다.\n");
		}
	}
	else {
		if (num % 2 == 0) {
			printf("10보다 작은 짝수입니다.\n");
		}
		else {
			printf("10보다 작은 홀수입니다.\n");
		}
	}
	
	return 0;
}