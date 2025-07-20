#include <stdio.h>
/*
    포인터 - 메모리 주소(번지)를 저장하는 변수
*/
int main()
{
	int n = 3;
	int* pn; //정수형 포인터 선언

	pn = &n; //주소를 저장

	printf("%d %x\n", n, &n); //3, fb5fc14

	printf("%d %x\n", *pn, pn); //3, fb5fc14

	return 0;
}