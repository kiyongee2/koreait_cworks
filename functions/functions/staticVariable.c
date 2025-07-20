#include <stdio.h>
/*
   정적 변수(지역 변수가 전역 변수화 함) 
   - static 키워드를 변수앞에 붙임
   - 생성 : 함수나 제어문 블럭 안에서 초기화할때
   - 소멸 : 프로그램이 종료 되었을때
*/
//int x = 0;  //전역 변수

void call();
int main()
{
	call();  //1
	call();  //2
	call();  //3

	return 0;
}

void call() {
	static int x = 0; //전역변수화 함(값이 유지)
	x++;
	printf("현재 호출은 %d번째 입니다\n", x);
}