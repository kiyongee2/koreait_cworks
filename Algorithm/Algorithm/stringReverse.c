#include <stdio.h>
/*
    문자열 처리 알고리즘
	- 문자열 역순으로 바꾸기
*/
int main()
{
	char a1[] = "DOG"; //문자열 끝에 '\0' - 널문자
	char a2[4];  //4개 이상 - 충분한 크기 확보
	int i;

	printf("%s\n", a1);

	//a1을 a2에 복사
	for (i = 0; i < 3; i++) {
		a2[i] = a1[i];
	}
	a2[3] = '\0';
	printf("복사: %s\n", a2);

	//a1을 a2에 거꾸로 복사
	for (i = 0; i < 3; i++) {
		a2[i] = a1[2-i];
	}
	a2[3] = '\0';
	printf("거꾸로 복사: %s\n", a2);

	return 0;
}