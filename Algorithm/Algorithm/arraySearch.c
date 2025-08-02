#include <stdio.h>
/*
    - 배열에서 값 찾기
	- 찾은 값의 개수 세기
*/
int main()
{
	//7 찾기
	int a[] = { 9, 8, 7, 6, 7 };
	int i;
	int count = 0;  //개수
	//a[2], a[4]

	for (i = 0; i < 5; i++) {
		if (a[i] == 7) {
			count++; //count += 1
			puts("7 발견!");
		}
	}
	printf("7을 %d개 발견!", count); 

	return 0;
}