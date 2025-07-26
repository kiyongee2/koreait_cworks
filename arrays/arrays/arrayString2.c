#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //표준 입출력
#include <string.h> //문자열 관련 함수

int main()
{
	/*int arr[4] = {3, 5, 2, 7};
	int i;

	//printf("%d\n", arr[1]); //5*/

	//사용자 입력
	/*int arr[4];
	int i;

	printf("*** 배열의 사용자 입력 ***\n");
	for (i = 0; i < 4; i++) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}*/

	//문자형 배열
	char str1[] = "apple";  //맨 끝에 '\0'
	char str2[6];
	int len;

	printf("str1: %s\n", str1); //apple

	//인덱싱 - 각 문자에 접근
	printf("%c\n", str1[0]); //a
	printf("%c\n", str1[4]); //e

	//문자열 배열의 크기(메모리) - sizeof()
	printf("배열의 크기: %d개\n", sizeof(str1));  //6

	//문자열의 개수 - strlen()
	len = strlen(str1);
	printf("문자의 개수: %d개\n", len);

	//str1을 str2에 복사(저장) - strcpy(저장할 장소, 문자열)
	strcpy(str2, str1);

	printf("str2: %s\n", str2);

	return 0;
}