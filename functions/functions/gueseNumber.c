#define _CRT_SECURE_NO_WARNINGS //scanf() 안전모드
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    숫자를 추측해서 맞히는 게임
	- 컴퓨터가 난수를 생성함(1 ~ 50)
	- 범위 초과("범위를 초과했어요. 다시 입력하세요")
	- 유저가 추측한 수 입력
	- 정답이면 프로그램 종료
	- 횟수는 총 5번으로 함
	- 
*/
int main()
{
	int comNum;    //컴퓨터의 난수
	int guessNum;  //유저가 추측한 수
	int count = 5; //시도 횟수

	srand(time(NULL));
	comNum = rand() % 50 + 1;

	while (1) {
		printf("남은 횟수 %d번\n", count--); //--를 뒤에 붙임(후치 연산)

		puts("맞혀보세요(예: 1~50 입력): ");
		scanf_s("%d", &guessNum);

		if (guessNum < 1 || guessNum > 50) {
			puts("범위를 초과했어요! 다시 입력하세요.");
		}
		else {
			if (guessNum == comNum) {
				puts("정답이에요!");
				break;
			}
			else if (guessNum > comNum) {
				puts("너무 커요!");
			}
			else {
				puts("너무 작아요!");
			}
		}

		//시도 횟수가 0일때 종료하기
		if (count == 0) {
			puts("남은 횟수가 0이네요. 아쉽게 실패했어요!");
			break;
		}
	}
	puts("프로그램을 종료합니다.");

	return 0;
}