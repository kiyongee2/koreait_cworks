#include <stdio.h>

int main()
{
	int x = 10, y = 20, z;
	int* arr[3];  //정수형 포인터 배열

	//주소 저장
	arr[0] = &x;
	arr[1] = &y;
	arr[2] = &z;

	//선언과 동시에 초기화
	//int* arr[3] = { &x, &y, &z };

	//역참조로 연산
	*arr[2] = *arr[0] + *arr[1];
	printf("%d\n", *arr[2]); //30
	printf("%d\n", z); //30


	return 0;
}