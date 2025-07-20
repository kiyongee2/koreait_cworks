#include <stdio.h>

int main()
{
	//정수형 배열 선언과 동시에 초기화(값 저장)
	int a[4] = { 10, 20, 30, 40 };
	int* pa;  //배열 a의 시작 주소를 저장할 pa 포인터 선언

	//배열의 시작주소는 배열의 이름이다.
	/*printf("%d %x %x\n", a[0], &a[0], a);     //10 cf6ff7d8 cf6ff7d8
	printf("%d %x %x\n", a[1], &a[1], a + 1); //20 b2eff6cc b2eff6cc*/

	pa = a; //&a[0];

	/*printf("%d %x\n", *pa, pa);         //10 2a8ffb98
	printf("%d %x\n", *(pa + 1), pa + 1); //20 2a8ffb9c*/

	//배열의 크기(배열 전체크기 / 요소 1개의 크기)
	int len = sizeof(a) / sizeof(a[0]); //4 = 16 / 4 

	for (int i = 0; i < len; i++) {
		printf("%d %x\n", *(pa + i), pa + i);
	}

	//배열과 포인터 자료형의 크기 - sizeof()
	//포인터는 자료형과 관계없이 모두 8byte
	printf("a의 크기: %dbyte, pa의 크기: %dbyte\n", sizeof(a), sizeof(pa)); //16 8

	return 0;
}