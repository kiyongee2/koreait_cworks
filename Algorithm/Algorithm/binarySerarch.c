#include <stdio.h>
/*
    이분 검색
	- 이미 정렬된 데이터를 좌우 둘로 나눠서 찾는 값의 범위를
	  좁혀가는 방법이다.
*/

int main()
{
	int low, high, mid;
	int x;  
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	low = 0;  //첫 인덱스
	high = 8; //마지막 인덱스
	x = 8;    //찾을값

	//찾기 반복
	while (low <= high) {
		//중간 인덱스의 값 계산
		mid = (low + high) / 2;
		printf("%d\n", mid); //4 -> 6 -> 7

		if (arr[mid] == x) { //찾음
			printf("%d는 arr[%d]에 있습니다.\n", x, mid);
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return 0;
}