#define _CRT_SECURE_NO_WARNINGS //scanf() 보안
#include <stdio.h>

int main()
{
	int age = 21;
	char name[] = "신유진"; //'\0'(NUL 문자) 생략

	printf("%d\n", age);  //21
	printf("%s %d\n", name, sizeof(name)); //신유진, 7

	//name 배열의 주소
	//배열의 이름은 배열의 시작 주소이다.
	printf("%x %x\n", &name[0], &name[1]);
	printf("%x %x\n", name, name + 1);

	//이름과 나이 입력 받기
	printf("이름 입력: ");
	scanf("%s", name); //배열이름은 & 생략

	printf("나이 입력: ");
	scanf("%d", &age); //이름은 & 붙임

	printf("이름: %s, 나이: %d\n", name, age);

	return 0;
}