#define _CRT_SECURE_NO_WARNINGS //fopen()
#include <stdio.h>
/*
    파일 입출력
	- 텍스트 기반 파일 입출력
	- 파일 구조체 포인터 생성 -> 파일 열기 -> 파일 쓰기 -> 파일 종료
*/

int main()
{
	FILE* fp;  //파일 포인터 생성

	//fopen(파일 위치, 모드-쓰기/읽기)
	fp = fopen("c:/cfile/out.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return -1;
	}

	//파일 쓰기
	//문자 1개 쓰기 - fputc()
	fputc('H', fp);
	fputc('e', fp);

	//파일 종료
	fclose(fp);

	return 0;
}