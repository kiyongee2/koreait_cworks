#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    아스키 파일 읽기
*/
int main()
{
	FILE* fp; //파일 구조체 포인터
	int ch;   //읽은 내용 저장할 변수(코드값)

	//파일 열기
	fp = fopen("c:/cfile/ascii.txt", "r");

	//파일 읽기 - fgetc()
	while ((ch = fgetc(fp)) != EOF) { //EOF = -1
		printf("%c", ch);
	}

	//파일 종료
	fclose(fp);

	return 0;
}