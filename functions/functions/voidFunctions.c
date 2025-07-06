#include <stdio.h>
/*
   - 함수(Function)
     . 어떤 특정한 기능을 수행하는 작은 프로그램이다.
	 . 함수를 정의하고, 정의된 함수를 호출하여 사용함
	 . 반환 자료형이 없는 함수, 있는 함수
	   1. void형 - 반환형이 없음
	   2. return형 - 반환형이 있음
*/
void sayHello();  //함수 선언부 표기
void sayHello2(char name[]);
int main()
{
	sayHello();  //함수 호출

	sayHello2("상영"); //이름을 매개변수로 전달
	sayHello2("윤하");

	return 0;
}

//인사하기 기능 함수 정의
void sayHello() {
	printf("안녕하세요~\n");
}

//이름을 부르면서 인사하기 기능 함수
void sayHello2(char name[]) {
	printf("%s님~ 안녕하세요.\n", name);
}