#include <stdio.h>

//main() 함수 - 운영체제(os)가 호출
//구구단을 계산하는 함수
//void - 반환 자료형이 없음
void gugudan(int dan) {
	//구구단 실행 코드 작성
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}
}

//원의 넓이를 계산하는 함수
double circleArea(int radius) { //반지름
	//원의 넓이 = PI * 반지름 * 반지름
	const double PI = 3.1415; //상수
	double area; //지역 변수(Local Variable)

	area = PI * radius * radius;
	return area;
}

int main()
{
	double value1; //지역 변수

	gugudan(5); //구구단 호출

	value1 = circleArea(7); //원의 넓이 호출
	printf("원의 넓이: %.4lf\n", value1);

	return 0;
}