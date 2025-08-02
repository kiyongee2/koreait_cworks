#include <stdio.h>
/*
   알고리즘(Algorithm)
   - 어떤 문제를 해결하기 위한 절차나 방법을 말한다.
*/
int main()
{
	//1부터 5까지의 합계
	//단순 합계
	printf("%d\n", 1 + 2 + 3 + 4 + 5);


	//for문 사용
	int i, sum = 0;

	for (i = 1; i <= 5; i++) {
		sum += i; //sum = sum + i;
	}
	printf("%d\n", sum);

	return 0;
}