#include <stdio.h>
#include <math.h> //pow()

int myPow(int x, int y) {
	//1 x 2 x 2 x 2 -> 2(밑)의 3(지수)제곱
	int num = 1;   //거듭제곱한 값
	int i; //반복 변수

	for (i = 0; i < 3; i++) {
		num *= x; //num = num * x;
	}
	return num;
	/*
	  i=0, 1 x 2
	  i=1, 2 x 2
	  i=2, 4 x 2 = 2 x 2 x 2
	  i=3, 반복 종료
	*/
}

int main()
{
	//거듭 제곱 - 2의 세제곱
	double value1;
	int value2;

	value1 = pow(2, 3); //내장 함수 호출
	value2 = myPow(2, 3); //직접 만든 함수 호출

	printf("%.lf\n", value1); //8
	printf("%d\n", value2);   //8

	return 0;
}