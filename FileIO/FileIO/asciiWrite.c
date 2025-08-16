#define _CRT_SECURE_NO_WARNINGS //fopen()
#include <stdio.h>
/*
    아스키 코드 쓰기
*/
int main()
{
	FILE* fp;
	int i;

	fp = fopen("c:/cfile/ascii.txt", "w");

	//파일 쓰기 - 32번(공백문자)
	for (i = 32; i < 128; i++) {
		if (i % 10 == 0)
			fputc('\n', fp);
		fputc(i, fp);
		fputc('\t', fp);
	}

	fclose(fp); //파일 닫기

	return 0;
}