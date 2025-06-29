#include <stdio.h>
/*
	for(초기값; 종료값; 증감값;){ 실행문 }

*/

int main()
{
	/*int n = 1;
	printf("n = %d\n", n); //1

	n++; //n = n + 1;
	printf("n = %d\n", n); //2

	n++;
	printf("n = %d\n", n); //3*/

	//1부터 10까지의 합계
	int sum = 0;
	for (int n = 1; n <= 10; n++) {
		sum += n; //sum = sum + n;
		//printf("%-3d", n);
		printf("n = %d, sum = %d\n", n, sum);
	}
	printf("합계: %d\n", sum);

	return 0;
}