#include <stdio.h>
/*
   지역변수의 생명 주기
   - 함수나 제어문의 블럭안에서 생성
   - 호출되면 값을 반환하고 블럭에서 삭제(소멸)됨
*/

int add10(); //함수 선언부
int main()
{
	printf("%d\n", add10());  //11

	//printf("%d\n", x);  //x를 호출할 수 없음

	return 0;
}

//어떤 수에 10을 더하는 함수
int add10() {
	int x = 1; //지역 변수
	x = x + 10;

	return x;
}