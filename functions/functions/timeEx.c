#include <stdio.h>
#include <time.h> //time()
#include <Windows.h> //Sleep() 사용
/*
   time() 
   - 현재 시간 출력
   - 수행 시간 측정
*/
int main()
{
	//NULL - 데이터가 없음을 의미(비어 있음)
	time_t now = time(NULL);  //시간이 흘러감

	//유닉스 운영체제(시스템)
	printf("1970년 1월 1일 자정 이후: %ld초\n", now); //1752901509초
	//일로 환산
	printf("1970년 1월 1일 자정 이후: %ld일\n", now / (24*60*60)); //20288일
	//년 환산
	printf("1970년 1월 1일 자정 이후: %ld일\n", now / (365 * 24 * 60 * 60)); //55일

	//수행 시간 측정
	time_t start, end; 

	start = time(NULL);  //시작 시간
	//1 ~ 10 출력(1분 간격으로 출력)
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	end = time(NULL);

	printf("실행시간: %ld초\n", (end - start));
	return 0;
}
