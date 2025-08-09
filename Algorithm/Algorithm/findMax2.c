#include <stdio.h>
/*
    배열에서 최대값 찾기
	- 맨 앞 요소를 최대값으로 지정
	- 요소 크기를 비교 - 반복문
*/

//findMax(배열, 배열의 크기)
int findMax(int a[], int n) {
	int max = a[0]; //첫 요소의 최대값
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

//findMaxIdx(배열, 배열의 크기)
int findMaxIdx(int a[], int n) {
	int maxIdx = 0; //첫요소의 최대값의 위치
	for (int i = 0; i < n; i++) {
		if (a[i] > a[maxIdx])
			maxIdx = i; //최대값 위치 변경
	}
	return maxIdx;
}

int main()
{
	int arr[] = { 53, 11, 65, 80, 36, 29 };
	int max, maxIdx, size;

	//배열의 크기
	size = sizeof(arr) / sizeof(arr[0]); //4*6=24byte, 24/4=6
	printf("%d %d\n", sizeof(arr), sizeof(arr[0])); //24 4

	//최대값 찾기 함수 호출
	max = findMax(arr, size);

	//최대값 위치 찾기 함수 호출
	maxIdx = findMaxIdx(arr, size);
	
	printf("최대값: %d\n", max); //80
	printf("최대값의 위치: %d\n", maxIdx); //3

	return 0;
}