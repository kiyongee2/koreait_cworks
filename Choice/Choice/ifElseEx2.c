#define _CRT_SECURE_NO_WARNINGS  //scanf() 보안 처리
#include <stdio.h>

/*
   if ~ else 구문
   - 조건: 입장객 수에 따른 좌석의 줄수 계산 프로그램
   - 입장객수: 22, 좌석열: 5 
   - 줄수: 4 + 1(줄 필요) -> 나누어 떨어지지 않으면 1줄이 필요함
   
*/

int main()
{
	int customer;
	int column;
	int row;  //줄 수는 정해지지 않음

	printf("입장객 수 입력: ");
	scanf("%d", &customer); //customer의 주소를 저장

	printf("좌석열 수 입력: ");
	scanf("%d", &column);  //column의 주소 저장

	if (customer % column == 0) { //나누어 떨어지면
		row = customer / column;
	}
	else {//customer % column != 0 //나누어 떨어지지 않으면 1줄 더 필요함
		row = (customer / column) + 1;
	}

	printf("%d줄이 필요합니다.\n", row);

	return 0;
}