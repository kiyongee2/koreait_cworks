#include <stdio.h>
/*
    배열을 이용한 막대 그래프
*/
int main()
{
	//int arr[] = { 3, 6, 4, 2 }; 
	int arr[4]; //정적 배열
	int i, j;  //반복 변수

	//사용자 입력
	for (i = 0; i < 4; i++) {
		printf("arr[%d] 입력: ", i);
		scanf_s("%d", &arr[i]);  //1개 입력시에 주소연산자 붙임
	}

	//막대 그래프 출력
	for (i = 0; i < 4; i++) { //행(row)
		printf("arr[%d]=%d|", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) { //열(col) 종료값
			printf("*");
		}
		printf("\n");
	}
	/*
	   i=0, arr[0]=3, j=1,  *            
	                  j=2,  **
			          j=3,  ***(종료)
	   i=1, arr[1]=6, j=1 ~ 6, ******(종료)
	   i=2, arr[2]=4, j=1 ~ 4, ****(종료)
	   i=3, arr[3]=2, j=1 ~ 2, **(종료)
	   i=4, 반복 종료
	*/

	return 0;
}