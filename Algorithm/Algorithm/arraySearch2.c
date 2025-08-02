#include <stdio.h>
/*
	- 배열에서 값 찾기
*/
int main()
{
	//7을 1개 찾으면 종료
	int a[] = { 9, 8, 7, 6, 7 };
	int i;
	int sw = 0; //토글, 상태(0 - 발견못함, 1 - 발견)

	for (i = 0; i < 5; i++) {
		if (a[i] == 7) {
			puts("7 발견!");
			sw = 1; //상태 1로 변경
			break;
		}
	}

	if (sw == 0) //동등 연산(비교)
		printf("7을 발견 못함!");
	
	return 0;
}