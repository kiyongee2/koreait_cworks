#define _CRT_SECURE_NO_WARNINGS //strcpy() 안전모드
#include <stdio.h>
#include <string.h>
/*
    typedef 키워드를 붙인다.
	typdedef struct{

	}구조체이름;
*/
#define SIZE 3   //구조체 배열의 크기(매크로 상수)

//사원 구조체
typedef struct {
	int id;        //사원 아이디
	char name[20]; //사원 이름
	int salary;    //급여
}Employee;

//사원 정보 출력 함수
void printInfo(Employee e) {
	printf("사원ID: %d, 이름: %s, 급여: %d\n", e.id,
		e.name, e.salary);
}

int main()
{
	//Employee 변수 생성
	/*Employee e1;

	//입력(초기화)
	e1.id = 1;
	strcpy(e1.name, "이사원");
	e1.salary = 3000000;*/

	Employee e1 = { 1, "이사원", 3000000 };

	//사원 정보 출력
	printInfo(e1);  //매개변수로 구조체 변수를 전달
	printf("=========================================\n");

	//구조체 배열 생성
	Employee employees[SIZE] = {
		{1, "김사원", 2000000},
		{2, "박대리", 3000000},
		{3, "최과장", 4000000},
	};

	//특정 변수 검색 - 사원 아이디가 2인 사원의 이름 검색
	printf("%d %s\n", employees[1].id, employees[1].name);

	printf("=============== 사 원 명 단 ===============\n");
	for (int i = 0; i < SIZE; i++) {
		printInfo(employees[i]);
	}

	return 0;
}