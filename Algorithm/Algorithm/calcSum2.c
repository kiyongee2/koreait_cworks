#include <stdio.h>
/*
     ** �հ� 1
	    1 + 2 + 3 +... + n -> O(n)
	 ** �հ� 2
	    (n x (n + 1)) / 2 -> O(1)

	** �ð� ���⵵(�� O) **
	 - O(n) : �ʿ��� ���Ƚ���� �Է� ũ�� n�� ����Ҷ�
	 - O(1) : �ʿ��� ���Ƚ���� �Է� ũ�� n�� �����Ҷ�
*/
int sumN(int n) {
	int i, sum = 0;

	for (i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int sumN2(int n) {
	int sum = 0;
	sum = (n * (n + 1)) / 2;
	return sum;
}

int main()
{
	//�հ� 1
	int result1, result2;

	result1 = sumN(10);
	printf("%d\n", result1); //55

	//�հ� 2
	result2 = sumN2(10);
	printf("%d\n", result2); //55

	return 0;
}