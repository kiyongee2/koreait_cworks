#include <stdio.h>
/*
    5개의 정수를 입력받아 최소값 구하기
	- 배열 선언
	- 최소값 계산 방법
	  1. 최소값 설정 - 매우 큰값으로 설정
	  2. 배열의 요소값과 최소값을 반복 비교함
	  3. 더 작은 요소값을 최소값에 저장
*/
int main()
{
	int arr[5];
	int idx = 0; //인덱스(index) - 요소의 위치(0 ~ 4)
	int min = 9999;  //최소값을 매우 큰수로 저장
	int result;  //입력 결과를 저장할 변수

	//오류 처리 하지 않은 코드
	/*while (idx < 5)
	{
		printf("%d번째의 수 입력(1 ~ 100): ", idx + 1);
		scanf_s("%d", &arr[idx]); //scanf_s() - 보안처리 불필요
		if (arr[idx] < min)
			min = arr[idx];
		idx++;
	}
	printf("최소값은 %d입니다.\n", min);*/

	//오류 처리 코드 - 문자를 입력했을 경우
	while (idx < 5)
	{
		printf("%d번째의 수 입력(1 ~ 100): ", idx + 1);
		result = scanf_s("%d", &arr[idx]);  
		//printf("%d", result); //1-정상, 0-잘못 입력

		if (result == 1) { //입력이 숫자가 정상적으로 입력되면
			if (arr[idx] < min)
				min = arr[idx];
			idx++;
		}
		else {
			printf("잘못된 입력입니다. 숫자를 입력하세요.\n");
			//입력된 버퍼(임시기억) 지우기 - '\n'을 만날때까지(엔터칠때까지)
			//getchar() - 문자 1개 저장
			while (getchar() != '\n');
		}
	}
	printf("최소값은 %d입니다.\n", min);

	//getchar() - 1개 문자 입력 함수
	/*int ch;

	printf("1개의 문자 입력: ");
	ch = getchar(); //입력 받기
	printf("입력된 문자: %c\n", ch); //출력*/

	return 0;
}