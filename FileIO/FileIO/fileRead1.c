#define _CRT_SECURE_NO_WARNINGS //fopen()
#include <stdio.h>
/*
	파일 입출력
	- 텍스트 기반 파일 입출력
	- 파일 구조체 포인터 생성 -> 파일 열기 -> 파일 읽기 -> 파일 종료
*/

int main()
{
	FILE* fp;

	fp = fopen("c:/cfile/out.txt", "r");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return -1;
	}

	//파일 읽기 - fgetc()
	int ch;  //읽은 문자 저장(아스키 코드값)

	//문자 1개 읽기
	/*ch = fgetc(fp);
	printf("%c\n", ch);*/

	//문자 전체 읽기
	/*while (1) {
		ch = fgetc(fp);
		if (ch == -1)
			break;
		printf("%c", ch);
	}*/

	while ((ch = fgetc(fp)) != EOF) { //End Of File(-1)
		printf("%c", ch);
	}

	//파일 종료
	fclose(fp);

	return 0;
}