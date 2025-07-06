#include <stdio.h>
/*
   학생 5명의 성적 통계
   - 총점, 평균, 최고 점수
   - 평균 = 총점 / 개수
   - 최고 점수 계산 방법
     1. 맨 처음값을 최대값으로 설정
	 2. 최대값과 다음 배열의 요소를 비교
	 3. 비교후 최대값에 더 큰값을 저장
*/
int main()
{
	//배열의 선언과 초기화
	int score[5] = { 85, 75, 90, 75, 80};
	int sum = 0;  //총점
	double avg;   //평균
	int max;      //최고점수
	int i;        //for문을 순회할 반복 변수
	int size;     //배열의 크기

	//배열의 크기 - 계산식
	// int형 4byte * 5 = 20byte, score[0]은 4byte
	size = sizeof(score) / sizeof(score[0]); //20 / 4 = 5
	printf("score 배열의 크기: %d\n", size); //5

	for (i = 0; i < size; i++) {
		sum += score[i]; //합계
	}
	//평균
	avg = (double)sum / size;  //(double) 형 변환 주의!!

	printf("총점: %d점\n", sum);
	printf("평균: %.1lf점\n", avg);  //double의 서식 - %lf 사용

	//최고 점수
	//{ 85, 75, 90, 75, 80} 
	max = score[0];  //첫번째 값
	for (i = 1; i < size; i++) {
		if (score[i] > max) { //배열의 다음 요소가 최대값보다 크면
			max = score[i];   //그 요소를 최대값에 저장
		}
	}
	printf("최고점수: %d점\n", max);

	return 0;
}