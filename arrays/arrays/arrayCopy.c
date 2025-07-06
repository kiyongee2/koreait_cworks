#include <stdio.h>
/*
   배열의 복사
*/
int main()
{
	//문자열은 배열이므로 위치로 찾을 수 있음
	char a1[] = "NET";
	char a2[4];  //a1을 복사할 배열 생성
	int i;  //반복 변수

	printf("%c\n", a1[0]);  //N
	printf("%c\n", a1[1]);  //E
	printf("%c\n", a1[3]);  //'\0' - 널문자
	printf("%c\n", a1[2]);  //T

	//a1을 a2에 복사
	/*a2[0] = a1[0];
	a2[1] = a1[1];
	a2[2] = a1[2];
	a2[3] = a1[3];*/
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	//a2 출력
	for (i = 0; i < 4; i++) {
		printf("%c", a2[i]);
	}

	printf("\n===============\n");
	//a1을 a2에 거꾸로 복사하기
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2 - i];
	}
	a2[3] = '\0';  //빈 문자 추가

	/*
		a2[0] = a1[2]; //T
		a2[1] = a1[1]; //E
		a2[2] = a1[0]; //N
	*/

	//a2 출력
	for (i = 0; i < 4; i++) {
		printf("%c", a2[i]);
	}

	return 0;
}