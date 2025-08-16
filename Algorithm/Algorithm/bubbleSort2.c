#include <stdio.h>
/*
   정렬 알고리즘
   - 버블 정렬: 배열에서 인접한 두 개의 요소를 비교하여 자리를 바꾸는 방식
   - 요소의 개수가 n개인 배열에서 n-1회 비교 및 교환함
   - 중첩 for문(이차원-행, 열)
   - 오름차순 정렬 구현
   - 시간 복잡도 : n * n -> O(n제곱)
*/

//bubbleSorting(배열, 배열의 크기)
void bubbleSorting(int a[], int n) {
	int i, j, temp;  //temp(교환을 위한 임시변수)

	//비교와 교환 반복
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1-i; j++) {
			//비교 구문
			if (a[j] > a[j + 1]) { //"<" 내림차순 정렬
				//교환 처리
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 41, 8, 36, 77, 15, 28 };
	int size; //배열의 크기
	size = sizeof(arr) / sizeof(arr[0]);
	//버블 정렬 함수 호출
	bubbleSorting(arr, size);

	//출력
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);  //8 15 36 41 77
	}

	return 0;
}