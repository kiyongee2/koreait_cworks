#include <stdio.h>
/*
    - 1부터 n까지 곱하기
	  1x2x3x4...xn -> n! 과 같음
*/
int factorial(int n) {
	int i, facto = 1;  //곱하는 초기값은 1로 설정
	for (i = 1; i <= n; i++) {
		facto *= i;  //facto = facto * i;
	}
	return facto;
}

int main()
{
	int a, b, c;

	a = factorial(3);
	b = factorial(4);
	c = factorial(5);

	printf("3!=%d, 4!=%d, 5!=%d\n", a, b, c); //6, 24, 120

	return 0;
}