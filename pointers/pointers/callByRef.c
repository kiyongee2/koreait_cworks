#include <stdio.h>

void callByVal(int n);
void callByRef(int* p);
int main()
{
	int num = 10;

	puts("===== 값에 의한 호출 =====");
	callByVal(num); //11
	printf("%d\n", num);  //10

	puts("===== 주소에 의한 호출 =====");
	callByRef(&num); //11
	printf("%d\n", num); //11

	return 0;
}

void callByVal(int n) {
	n++;  //1증가

	//함수 호출후 n은 11을 출력하고 메모리에서 소멸됨
	printf("%d\n", n);
}

void callByRef(int* p) {
	*p += 1; //*p = *p + 1;
	printf("%d\n", *p);
}