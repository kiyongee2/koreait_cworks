#include <stdio.h>

/*
	구조체 포인터
	- 구조체 포인터 변수는 참조 연산자(->)를 사용한다.
*/

typedef struct {
	int no;        //번호(4b)
	char name[20]; //이름(20b)
	int age;       //나이(4b)
}Hero;

int main()
{
	//구조체 변수 선언과 초기화(값 저장)
	Hero h1 = { 1, "고담덕", 39 };

	printf("번호: %d, 이름: %s, 나이: %d\n", h1.no,
		h1.name, h1.age);

	//구조체 포인터 선언과 초기화
	Hero h2 = { 2, "이순신", 54 };
	Hero* ptr = &h2;  //h2의 주소 저장(8b)

	printf("번호: %d, 이름: %s, 나이: %d\n", ptr->no,
		ptr->name, ptr->age);

	return 0;
}











