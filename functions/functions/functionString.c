#define _CRT_SECURE_NO_WARNINGS //strcpy() 안전모드
#include <stdio.h>
#include <string.h>  //문자열 관련 함수 라이브러리
/*
    # strlen(문자열) - 문자열의 개수
	# strcpy(복사할 배열, 복사할 문자열)
	# strcmp(str1, str2) - 문자열 일치 여부 비교
*/
int main()
{
	char msg1[] = "Good Luck!";
	char msg2[20];
	int len;

	len = strlen(msg1);  //공백문자, 특수문자 포함

	//msg1을 msg2에 복사(저장)
	strcpy(msg2, msg1);

	printf("msg1의 개수: %d\n", len);  //10
	printf("msg2: %s\n", msg2);  //Good Luck!
	printf("-------------------------------\n");

	//문자열 일치 여부 비교
	//대소문자 구분함
	char greet1[] = "bye";
	char greet2[] = "Bye";
	int result;

	result = strcmp(greet1, greet2); //일치-0, 불일치-1
	//printf("result = %d\n", result); 

	if (strcmp(greet1, greet2) == 0) {
		puts("두 문자열이 일치합니다.");
	}
	else {
		puts("두 문자열이 일치하지 않습니다.");
	}


	return 0;
}