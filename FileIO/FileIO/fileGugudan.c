#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
   실습 문제 - 파일에 구구단 쓰기
*/
int main()
{
	FILE* fp;

	//파일 위치 - 프로젝트 내부에 저장
	fp = fopen("gugudan.txt", "w");
	if (fp == NULL) {
		puts("파일 열기에 실패했습니다.\n");
		return -1;
	}

	//구구단 쓰기
	fputs("*** 구구단(2 ~ 9) ***\n", fp);

	//코드 작성
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			fprintf(fp, "%d x %d = %d\n", i, j, (i * j));
		}
		fprintf(fp, "\n");
	}

	fclose(fp);  //파일 종료(쓰기)

	//구구단 파일 읽기
	char buf[256];  //구구단 읽은 내용 저장

	fp = fopen("gugudan.txt", "r");
	if (fp == NULL) {
		puts("파일 열기에 실패했습니다.\n");
		return -1;
	}

	//파일 읽기
	while ((fgets(buf, sizeof(buf), fp)) != NULL) {
		printf("%s", buf);
	}

	fclose(fp); //파일 종료(읽기)

}