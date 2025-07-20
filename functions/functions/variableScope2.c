#include <stdio.h>
/*
   전역 변수의 생명 주기
   - main()함수 위쪽이나 맨 위쪽에서 생성함
   - 변수의 값을 공유 또는 유지함
   - 프로그램이 종료되면 메모리에서 소멸함
*/
int x = 1; //전역 변수(global variable)

int add10(); //함수 선언부
int main()
{
	printf("%d\n", add10());  //11
	printf("%d\n", x);  //11

	return 0;
}

//어떤 수에 10을 더하는 함수
int add10() {
	x = x + 10;
	return x;
}