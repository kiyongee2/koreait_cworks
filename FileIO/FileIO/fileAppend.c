#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
   쓰기 모드("w") - 파일에 쓰기할 때마다 초기화 됨
   추가 모드("a") - 파일의 기존내용에 추가할 때 사용
*/

int main()
{
	FILE* fp;
	char msg[] = "행운을 빌어요";

	//파일 쓰기
	fp = fopen("c:/cfile/out.txt", "a");

	//파일 내용 추가
	fputs("banana", fp);
	//fprintf(파일포인터, 서식문자, 데이터)
	fprintf(fp, "%s\n", msg);

	fclose(fp);  //파일 종료

	//파일 읽기
	char str[128];  //읽은 내용을 저장할 배열
	fp = fopen("c:/cfile/out.txt", "r");

	//맨 위 한줄 읽기 - fgets(배열, 배열의 크기, 파일포인터) : 여러 개의 문자 읽기
	/*fgets(str, sizeof(str), fp);
	printf("%s", str);*/

	//전체 읽기(모든 라인 읽기)
	while ((fgets(str, sizeof(str), fp)) != NULL) { //배열 요소 없음-NULL
		printf("%s", str);
	}

	return 0;
}