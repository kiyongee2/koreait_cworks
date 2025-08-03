#include <stdio.h>
/*
	- 1부터 n까지 곱하기
	  재귀 알고리즘 사용
	  4! = 4 x 3 x 2 x 1
	  4! = 4 x 3! = 4 x (4 - 1)!
	  3! = 3 x 2! = 3 x (3 - 1)!
	  ...
	  n! = n x (n - 1)!
*/
int factorial(int n) {
	if (n <= 0)
		return 1;  //종료 반환값
	else
		return n * factorial(n - 1);
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