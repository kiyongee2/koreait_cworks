#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //true/false
#include <string.h> //strcmp(), strcpy()
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
	char accountNumber[ANO_LEN]; //외부 입력(계좌번호)

	//계좌수 배열 한도 초과시 오류 처리
	if (accountCount >= MAX_ACCOUNTS) {
		puts("더 이상 계좌를 생성할 수 없습니다.");
		return;
	}

	printf("계좌번호 입력(예: xx-xx-xxxx): ");
	scanf("%s", accountNumber);  //외부 입력(계좌번호)

	//계좌 중복 검사
	for (int i = 0; i < accountCount; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			puts("이미 등록된 계좌입니다. 다시 입력하세요.");
			return;
		}
	}

	//중복 없을때 계좌 생성(저장)
	strcpy(accounts[accountCount].ano, accountNumber);

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
	bool found = false; //상태(계좌 찾음/ 계좌 못찾음)
	
	printf("입금할 계좌번호(예: xx-xx-xxxx): ");
	scanf("%s", accountNumber);

	for (int i = 0; i < accountCount; i++) {
		//기존에 등록된 계좌와 외부 입력한 계좌가 일치하면
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			found = true; //계좌 찾음

			printf("입금액: ");
			scanf("%d", &amount);
			if (amount < 0) {
				puts("올바른 금액이 아닙니다.");
				return; //즉시 종료
			}
			else {
				accounts[i].balance += amount;
				printf("정상 처리되었습니다. 현재 잔액: %d\n", accounts[i].balance);
				return; //즉시 종료
			}
		}
	} //for() 닫기

	if (!found) { //found = false
		puts("계좌를 찾을 수 없습니다.");
	}
}

//출금 기능
void withdraw() {
	char accountNumber[ANO_LEN]; //외부 입력(계좌번호)
	int amount;  //출금액
	bool found = false; //상태(계좌 찾음/ 계좌 못찾음)

	printf("입금할 계좌번호(예: xx-xx-xxxx): ");
	scanf("%s", accountNumber);

	for (int i = 0; i < accountCount; i++) {
		//기존에 등록된 계좌와 외부 입력한 계좌가 일치하면
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			found = true; //계좌 찾음

			printf("출금액: ");
			scanf("%d", &amount);
			if (amount < 0 || amount > accounts[i].balance) {
				puts("잔액이 부족하거나 올바른 금액이 아닙니다.");
				return; //즉시 종료
			}
			else {
				accounts[i].balance -= amount;
				printf("정상 처리되었습니다. 현재 잔액: %d\n", accounts[i].balance);
				return; //즉시 종료
			}
		}
	} //for() 닫기

	if (!found) { //found = false
		puts("계좌를 찾을 수 없습니다.");
	}
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