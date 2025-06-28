#include <stdio.h>

/*
    - 반복 조건문(while ~ if ~ break)
	- 조건 : 1부터 10까지 합계
*/

int main()
{
	int n = 1;
	int sum = 0;

	while (1) { //무한 반복문
		if (n > 10)  //n = 11일때 탈출
			break;
		sum += n;
		//printf("%-3d", n); //3칸이 생기고 왼쪽 정렬
		n++;
	}
	printf("합계: %d, n: %d\n", sum, n);

	return 0;
}