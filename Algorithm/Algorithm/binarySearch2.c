#include <stdio.h>
/*
	이분 검색
	- 이미 정렬된 데이터를 좌우 둘로 나눠서 찾는 값의 범위를
	  좁혀가는 방법이다.
*/
int binarySerarch(int a[], int n, int x) {
	int low, high, mid;
	low = 0;  //첫 인덱스
	high = n - 1; //마지막 인덱스
	
	while (low <= high) {
		mid = (low + high) / 2;
		if (a[mid] == x)  //찾음
			return mid;
		else if (a[mid] < x) 
			low = mid + 1;
		else 
			high = mid - 1;
	}//while() 닫기
	return -1;  //찾지 못함
}

int main()
{
	int low, high, mid;
	int x, size, idx;
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	x = 3;    //찾을값

	size = sizeof(arr) / sizeof(arr[0]);

	idx = binarySerarch(arr, size, x); //binarySearch() 호출
	if (idx == -1) 
		printf("%d는(은) 없습니다.\n", x);
	else
		printf("%d는(은) arr[%d]에 있습니다.\n", x, idx);
	
	return 0;
}