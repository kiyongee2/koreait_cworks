#include <stdio.h>
/*
    - 1���� n���� ���ϱ�
	  1x2x3x4...xn -> n! �� ����
*/
int factorial(int n) {
	int i, facto = 1;  //���ϴ� �ʱⰪ�� 1�� ����
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