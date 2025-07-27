#include <stdio.h>
#include <time.h>
#include <Windows.h> //Sleep()

int main()
{
	//현재 시간 알아보기
	time_t now;

	now = time(NULL); //NULL - 비어있다는 의미의 자료형

	printf("%ld초\n", now); //1970. 1. 1 자정 이후 시간 측정
	printf("%ld일\n", now / (24 * 60 * 60)); //1970. 1. 1 자정 이후 시간 측정

	//수행 시간 측정
	/*time_t start, end;

	start = time(NULL);  //시작 시간

	// 1 ~ 10 출력(0.5초 대기)
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  //1000 - 1초
	}

	end = time(NULL); //종료 시간
	printf("%ld초\n", (end - start));*/

	//정밀한 시간 측정
	clock_t start, end;
	double elapsedTime;  //소요 시간

	start = clock();  //시작 시간
	// 1 ~ 10 출력(0.5초 대기)
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  //1000 - 1초
	}
	end = clock();  //종료 시간
	//CLOCKS_PER_SEC - 초당 시각 변환 상수
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;

	printf("%.2lf초\n", elapsedTime);

	return 0;
}