#include <stdio.h>
#include <stdlib.h> //malloc(), free()

int main()
{
	//배열의 정적(고정) 할당
	/*int num[5] = {2, 4, 6, 8, 10};

	printf("%d\n", num[3]);*/

	//배열의 동적 할당 - 포인터 준비
	int* pn;

	//malloc()은 자료형에 맞춰 명시적 형변환 해야함
	pn = (int*)malloc(sizeof(int) * 5); //4byte * 5 = 20byte
	if (pn == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); //강제 종료(return 1)
	}

	/*pn[0] = 2;
	printf("%d\n", pn[0]); //2*/

	//짝수(2의 배수)로 저장
	for (int i = 0; i < 5; i++) {
		pn[i] = (i + 1) * 2;   //2, 4, 6, 8, 10
	}

	//출력
	for (int i = 0; i < 5; i++) {
		printf("%d ", pn[i]);   //2, 4, 6, 8, 10
	}

	free(pn);  //포인터 pn - 메모리 반납

	return 0;
}