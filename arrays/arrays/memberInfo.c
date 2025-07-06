#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    회원 정보 입력과 출력
	- 아이디, 비밀번호, 이름, 몸무게, 키
*/

int main()
{
	char id[20];
	char password[256];
	char name[30];
	float weight;
	float height;

	printf("===== 회원 정보 입력 =====\n");
	printf("아이디 입력: ");
	scanf("%s", id);

	printf("비밀번호 입력: ");
	scanf("%s", password);

	printf("이름 입력: ");
	scanf("%s", name);

	printf("몸무게 입력: ");
	scanf("%f", &weight);

	printf("키 입력: ");
	scanf("%f", &height);

	printf("===== 회원 정보 출력 =====\n");
	printf("아이디: %s\n", id);
	printf("비밀번호: %s\n", password);
	printf("이름: %s\n", name);
	printf("몸무게: %.1f\n", weight);
	printf("키: %.1f\n", height);

	return 0;
}