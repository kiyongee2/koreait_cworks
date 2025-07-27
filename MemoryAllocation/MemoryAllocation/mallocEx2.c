#include <stdio.h>
#include <stdlib.h> //malloc(), free()

/*
    메모리 데이터 영역(전역변수, 정적변수)
    메모리 스택 영역(지역변수, 매개변수)
	메모리 힙 영역(동적 할당)
*/
int main()
{
	int num1 = 10;
	int* ptr1;  //스택 영역(지역 포인터)
	int* ptr2;  //힙 영역(동적 배열)

	ptr1 = &num1;

	ptr2 = (int*)malloc(sizeof(int) * 3);
	if (ptr2 == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	//값 저장
	ptr2[0] = 11;
	ptr2[1] = 12;
	ptr2[2] = 13;

	//ptr1의 값과 주소
	printf("%d %p\n", *ptr1, ptr1); //10
	printf("=========================\n");

	//ptr2의 값과 주소
	//printf("%d %p\n", *(ptr2 + 0), ptr2 + 0); //11

	for (int i = 0; i < 3; i++) {
		printf("%d %p\n", *(ptr2 + i), ptr2 + i);
	}

	free(ptr2); //메모리 해제

	return 0;
}