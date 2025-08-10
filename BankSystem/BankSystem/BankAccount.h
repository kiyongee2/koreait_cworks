//조건부 컴파일 블록
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H //매크로 이름 - 중복 방지

//매크로 상수
#define ANO_LEN 20
#define OWNER_LEN 30
#define MAX_ACCOUNTS 100

//은행 계좌 구조체
typedef struct {
	char ano[ANO_LEN]; //계좌 번호
	char owner[OWNER_LEN]; //예금주
	int balance;    //잔고
}BankAccount;

//전역 변수 선언
//extern 키워드는 헤더 파일을 구현한 파일에서 사용함
extern BankAccount accounts[MAX_ACCOUNTS];  //계좌 배열 생성
extern int accountCount;  //현재 계좌수

//계좌 관련 함수 선언부(프로토타입)
void createAccount();
void deposit();
void withdraw();
void displayAccount();

#endif // !1