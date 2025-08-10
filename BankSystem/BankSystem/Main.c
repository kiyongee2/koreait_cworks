#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "BankAccount.h"  //제작한 헤더파일

int main()
{
	bool run = true;  //상태 변수(실행/종료)
	int choice;  //메뉴 선택

	while (run) {
		printf("=======================================================\n");
		printf("1.계좌 생성 | 2.예금 | 3.출금 | 4. 계좌 목록 | 5.종료 \n");
		printf("=======================================================\n");
		printf("선택> ");

		scanf("%d", &choice);
		switch (choice) {
		case 1:
			//계좌 생성
			createAccount();
			break;
		case 2:
			//예금
			deposit();
			break;
		case 3:
			//출금
			withdraw();
			break;
		case 4:
			//계좌 정보
			displayAccount();
			break;
		case 5:
			printf("프로그램을 종료합니다.\n");
			run = false;  //종료
			break;
		default:
			puts("잘못된 입력입니다. 다시 입력하세요.");
			break;
		}
	}

	return 0;
}