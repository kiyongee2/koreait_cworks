#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //true/false
#include <string.h>
/*
    은행 시스템
	- 은행 계좌: BankAccount 구조체 정의
	- 은행 계좌를 저장할 구조체 배열 생성
*/
#define ANO_LEN 20
#define OWNER_LEN 30
#define MAX_ACCOUNTS 100

typedef struct {
	char ano[ANO_LEN]; //계좌 번호
	char owner[OWNER_LEN]; //예금주
	int balance;    //잔고
}BankAccount;

//전역 공간
BankAccount accounts[MAX_ACCOUNTS];  //계좌 배열 생성
int accountCount = 0;  //현재 계좌수

//계좌 생성
void createAccount() {
	printf("계좌번호 입력(예: xx-xx-xxxx): ");
	scanf("%s", accounts[accountCount].ano);

	printf("예금주 입력: ");
	scanf("%s", accounts[accountCount].owner);

	//잔고 - 0으로 초기화함
	accounts[accountCount].balance = 0;
	puts("결과: 계좌가 생성되었습니다.");

	accountCount++;  //계좌수 1증가
}

//예금 기능
void deposit() {
	char accountNumber[ANO_LEN]; //외부 입력(계좌번호)
	int amount;  //입금액
	
	printf("입금할 계좌번호(예: xx-xx-xxxx): ");
	scanf("%s", accountNumber);

	for (int i = 0; i < accountCount; i++) {
		//기존에 등록된 계좌와 외부 입력한 계좌가 일치하면
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("입금액: ");
			scanf("%d", &amount);
			if (amount < 0) {
				puts("올바른 금액이 아닙니다.");
				return;
			}
			else {
				accounts[i].balance += amount;
				printf("정상 처리되었습니다. 현재 잔액: %d\n", accounts[i].balance);
				return;
			}
			
		}
	} //for() 닫기

	puts("계좌를 찾을 수 없습니다.");
}

//계좌 정보 출력
void displayAccount() {

	if (accountCount == 0) {
		puts("등록된 계좌가 없습니다.");
		return;  //즉시 종료
	}

	for (int i = 0; i < accountCount; i++) {
		printf("계좌 번호: %s, 예금주: %s, 잔액: %d\n", accounts[i].ano,
			accounts[i].owner, accounts[i].balance);
	}
}

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
			//withdraw();
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