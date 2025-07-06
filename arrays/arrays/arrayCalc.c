#include <stdio.h>
/*
   배열의 연산
   - 합계, 평균, 개수
*/
int main()
{
	int num[4] = { 1, 2, 3, 4 };
	int sum = 0; //합계를 저장할 변수
	int i;  //반복 변수
	float avg;  //평균을 저장할 변수

	//printf("%d\n", num[0] + num[1]); //3
	//
	/*sum = sum + num[0];  //0 + 1, sum=1
	sum = sum + num[1];  //1 + 2, sum=3
	sum = sum + num[2];  //3 + 3, sum=6
	sum = sum + num[3];  //6 + 4, sum=10*/

	for (i = 0; i < 4; i++) {
		sum = sum + num[i];
	}
	//평균 = 합계 / 개수
	avg = (float)sum / 4; //결과가 정수이므로 sum을 실수형으로 변환함

	printf("합계: %d\n", sum);
	printf("평균: %.1f\n", avg);


	return 0;
}