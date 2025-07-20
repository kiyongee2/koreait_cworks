#include <stdio.h>

int main()
{
	//이차원 정수형 배열 선언 및 초기화
	int a[3][2] = { 
		75, 80, 
		85, 95, 
		90, 100 
	};

	//특정 요소 검색
	printf("%d\n", a[0][0]);  //75
	printf("%d\n", a[1][1]);  //95

	//전체 출력1 - 행(변수), 열(상수)
	for (int x = 0; x < 3; x++) {
		printf("%d %d\n", a[x][0], a[x][1]);
	}
	printf("=====================\n");

	//전체 출력2 - 행(변수), 열(변수)
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 2; y++) {
			printf("%d ", a[x][y]);
		}
		printf("\n");
	}

	//이차원 정수형 배열에 숫자 저장
	//1부터 순차적으로 저장
	int arr[3][3];
	int k = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			k++; //1 증가
			arr[i][j] = k;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}