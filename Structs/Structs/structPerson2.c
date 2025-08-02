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
	//구조체 배열 생성
	struct Person p[3] = {
		{"이산", 15, 171.9f},
		{"한강", 35, 163.3f},
		{"박봄", 22, 175.4f},
	};
	int i;

	for (i = 0; i < 3; i++) {
		printf("이름: %s, 나이: %d, 키: %.1f\n",
			p[i].name, p[i].age, p[i].height);
	}
	
	return 0;
}