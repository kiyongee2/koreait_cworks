#include <stdio.h>

//세 수의 최대값을 구하는 함수
int max3(int a, int b, int c) {
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;

	return max; //호출한 곳으로 반환
}

int main()
{
	//두 개의 숫자중 큰 수 찾기
	int x = 10, y = 20;
	int result;  //결과값

	result = (x > y) ? x : y;
	printf("두 수중 더 큰수: %d\n", result);

	//세 개의 숫자중 최대값 찾기
	/*int a = 10, b = 30, c = 20;
	int max;

	//맨 앞에 있는 값을 최대값으로 지정
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;*/

	//max3 함수 호출
	printf("max3(%d, %d, %d) = %d\n", 1, 3, 2, max3(1, 3, 2));
	printf("max3(%d, %d, %d) = %d\n", 1, 2, 3, max3(1, 2, 3));
	printf("max3(%d, %d, %d) = %d\n", 2, 1, 3, max3(2, 1, 3));
	printf("max3(%d, %d, %d) = %d\n", 2, 3, 1, max3(2, 3, 1));

	return 0;
}