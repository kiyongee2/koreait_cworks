#include <stdio.h>
#include <stdlib.h> //malloc(), free()
/*
    사람의 키를 입력받아 최대값 구하기
*/
//findMax(배열, 배열의 크기)
float findMax(float a[], int n) {
	float max = a[0]; //첫 요소의 최대값
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int main()
{
	int number;  //사람수
	float* height; //키를 저장할 배열 - 동적 할당

	printf("사람수 입력: ");
	scanf_s("%d", &number);

	//메모리 생성(malloc()) 사용
	height = (float*)malloc(sizeof(float) * number);
	if (height == NULL) {
		puts("메모리 할당에 실패했습니다.\n");
		return 1;
	}

	//키 입력 받기
	printf("%d명의 키를 입력하세요\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d]= ", i);
		scanf_s("%f", &height[i]);
	}

	//최대값 찾기 함수 호출
	printf("최대값은 %.1f입니다.\n", findMax(height, number));

	//메모리 해제
	free(height);

	return 0;
}