#include <stdio.h>
/*
     ** 합계 1
	    1 + 2 + 3 +... + n -> O(n)
	 ** 합계 2
	    (n x (n + 1)) / 2 -> O(1)

	** 시간 복잡도(빅 O) **
	 - O(n) : 필요한 계산횟수가 입력 크기 n과 비례할때
	 - O(1) : 필요한 계산횟수가 입력 크기 n과 무관할때
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
	//합계 1
	int result1, result2;

	result1 = sumN(10);
	printf("%d\n", result1); //55

	//합계 2
	result2 = sumN2(10);
	printf("%d\n", result2); //55

	return 0;
}