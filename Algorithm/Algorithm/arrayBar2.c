#include <stdio.h>
#include <stdlib.h> //malloc(), free()
/*
	배열을 이용한 막대 그래프
*/
int main()
{
	//동적 배열 할당(포인터 사용) - 메모리 heap 영역
	int* arr = NULL; //NULL로 초기화
	int size;  //배열의 크기(요소의 개수)
	int i, j;  //반복 변수

	printf("배열의 크기 입력: ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		puts("메모리 할당에 실패했습니다.\n");
		return 1; //1 or -1
	}

	//사용자 입력 및 유효성 검사
	for (i = 0; i < size; i++) {
		while (1) {
			printf("arr[%d] 값 입력(0 이상 정수): ", i);
			if (scanf_s("%d", &arr[i]) !=1 || arr[i] < 0) {
				//오류 처리
				printf("잘못된 입력입니다. 다시 입력하세요.\n");
				//이전 입력된 데이터 지우기(버퍼 비우기)
				while (getchar() != '\n');
			}
			else { // scanf_s("%d", &arr[i]) ==1
				//정상
				break;
			}
		}
	}
	
	//막대 그래프 출력
	for (i = 0; i < size; i++) { //행(row)
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

	free(arr); //메모리 반납

	return 0;
}