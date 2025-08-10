#include <stdio.h>
/*
    선택 정렬(selection sorting)
	- 배열에서 가장 작은 값을 찾아서 맨 앞으로 보내는 방식
	- 첫째행은 i=0을 최소값으로 지정
	- 둘째행은 i=1을 최소값으로 지정
	... 반복
*/
int main()
{
	int arr[] = { 41, 36, 8, 77, 15 };
	int i, j, temp, minIdx;

	//비교와 교환 반복
	for (i = 0; i < 4; i++) {
		minIdx = i;  //현재 위치(행)를 최소값으로 지정
		for (j = i + 1; j < 5; j++) {
			if (arr[j] < arr[minIdx])
				minIdx = j; //비교후 최소값 위치 수정
		}

		//교환 처리
		temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;
	}

	//비교 교환후 정렬 출력
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}