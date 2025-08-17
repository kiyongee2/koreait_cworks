#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    구조체 자료형 사용하여 파일 쓰기/읽기
*/

//Person 구조체 정의
typedef struct {
	char name[20];   //이름
	int age;  //나이
}Person;

int main()
{
	FILE* fp;
	Person p1 = {"이정후", 26}; //구조체 변수 생성
	Person p2;  //읽은 내용을 저장할 구조체 변수

	//쓰기 모드로 열기
	fp = fopen("person.txt", "w");
	if (fp == NULL) {
		puts("파일 열기에 실패했습니다.\n");
		return -1;
	}

	//파일 쓰기
	fprintf(fp, "%s %d\n", p1.name, p1.age);

	fclose(fp);

	//파일 읽기
	fp = fopen("person.txt", "r");
	if (fp == NULL) {
		puts("파일 열기에 실패했습니다.\n");
		return -1;
	}

	//파일 읽기(입력) - fscanf(파일포인터, 서식문자, 데이터 주소)
	fscanf(fp, "%s %d", p2.name, &p2.age);

	fclose(fp);

	printf("이름: %s, 나이: %d\n", p2.name, p2.age);

	return 0;
}