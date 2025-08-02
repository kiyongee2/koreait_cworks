#define _CRT_SECURE_NO_WARNINGS //strcpy() 안전모드
#include <stdio.h>
#include <string.h> //strcpy()
/*
    구조체(structure)
	 - 다양한 자료형을 그룹화하여 하나의 변수로 처리할 수 있게 만든 자료형
	 - main() 위에서 정의함
	 - 첫글자는 관례적으로 대문자로 시작함
*/
struct Person {
	//사람의 속성(property)
	char name[20]; //이름
	int age;       //나이
	float height;  //키
};

int main()
{
	//Person 구조체의 변수(p1) 생성(선언)
	struct Person p1;

	//속성값 입력 - 구조체 변수가 점(.) 연산자로 접근
	//배열에 문자열을 저장할때는 strcpy(저장할 장소, 문자열) 꼭 사용
	strcpy(p1.name, "임시연");
	p1.age = 23;
	p1.height = 172.3f;

	//구조체 변수 초기화 저장
	struct Person p2 = { "이정우", 26, 180.6f };

	//정보 출력
	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("키: %.1f\n", p1.height);

	printf("이름: %s\n", p2.name);
	printf("나이: %d\n", p2.age);
	printf("키: %.1f\n", p2.height);

	return 0;
}






