#include <stdio.h>
#include <stdlib.h>
/*
    점수를 입력 받아서 평균 계산
	- 배열의 크기 입력
	- 점수 입력

*/
int main()
{
	int len; //배열의 크기
	int* p;  //동적 할당을 위한 포인터
	int i, sum = 0, max;  //반복 변수, 합계, 최고 점수
	float avg;  //평균

	printf("*** 점수 평균 계산 ***\n");
	printf("입력할 점수의 개수: ");
	scanf_s("%d", &len);

	p = (int*)malloc(sizeof(int) * len); //메모리 생성
	if (p == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	//점수 입력
	for (i = 0; i < len; i++) {
		printf("%d번째 점수: ", i + 1);
		scanf_s("%d", &p[i]);
	}

	//합계
	max = p[0]; //최대값 초기화 설정
	for (i = 0; i < len; i++) {
		sum += p[i]; //sum = sum + p[i];
		if (max < p[i])  //최대값 비교
			max = p[i];
	}
	printf("합계: %d\n", sum);

	//평균 계산
	avg = (float)sum / len;
	printf("평균: %.1f\n", avg);
	printf("최고 점수: %d\n", max);

	//출력
	/*for (i = 0; i < len; i++) {
		printf("%d\n", p[i]);
	}*/

	free(p);  //메모리 해제

	return 0;
}