#include <stdio.h>

int main()
{
	//짝수/홀수 판정 - 2의 배수
	// 1 ~ 10 까지의 자연수중 짝수만 출력
	int i; //반복 변수

	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0)
			printf("%3d", i);
	}
	printf("\n");

	// 1 ~ 20 까지의 자연수중 3의 배수 출력
	// 3의 배수의 개수 출력
	int count = 0; //개수
	for (i = 1; i <= 20; i++) {
		if (i % 3 == 0) {
			count++; //count = count + 1
			printf("%3d", i);
		}
	}
	printf("\n3의 배수의 개수: %d\n", count);
	/*
	    i=1, 
		i=2,
		i=3, count=1, 3
		i=4;
		i=5
		i=6, count=2, 6
		...
	*/


	return 0;
}