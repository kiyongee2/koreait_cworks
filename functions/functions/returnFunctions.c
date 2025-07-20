#include <stdio.h>

/*
  함수가 main() 아래에 위치하면
  함수 선언부 명시
*/ 
int square(int x); //선언부 
int myAbs(int x);

int main()
{
	int value1, value2;

	//제곱수 계산 함수 호출
	value1 = square(4);

	//절대값 계산 함수 호출
	value2 = myAbs(-8);

	printf("제곱수: %d\n", value1);
	printf("절대값: %d\n", value2);

	return 0;
}

//함수 정의
int square(int x) { //int x(매개변수) = 4
	return x * x;
}

int myAbs(int x) {
	//x가 양수이면 양수를 리턴
	//x가 음수이면 양수를 리턴
	if (x < 0)
		return -x;
	else 
		return x;
}
