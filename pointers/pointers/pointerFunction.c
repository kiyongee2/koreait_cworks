#include <stdio.h>

void swap(int* a, int* b) { //a=&x, b=&y
	int temp; //지역 변수(블럭 벗어나면 소멸)
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	//값 교환
	int x = 1, y = 2;

	swap(&x, &y);
	printf("x = %d, y = %d", x, y);

	/*
	int num = 10;
	int* p;
	p = &num; //num의 주소 저장
	*p = 20;
	printf("%d\n", *p); //역참조(값 확인), 20
	printf("%d\n", num); //20
	*/

	return 0;
}