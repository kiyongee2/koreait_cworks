#include <stdio.h>
/*
	- 반복문(while)
	  조건이 만족될때까지 수행문을 반복으로 수행함
	  - 초기값(1)
	  - 종료값(10)
	  - 증감값(1 증가)
*/

int main()
{
	/*
	int n = 1;  //초기값
	//printf("%d\n", n);

	//n++; //n = n + 1;
	//printf("%d\n", n);

	//n++;
	//printf("%d\n", n);

	while (n <= 10) { //종료값
		printf("%d\n", n);
		n++;  //증감값
		//n += 2; //n = n + 2; //2 증가
	}
	printf("\n");

	n = 10;  //초기값
	while (n > 0) {
		printf("%d\n", n);
		n--; //n = n - 1;
	}*/

	//1부터 10까지 합계
	int n = 0;     //반복 변수
	int total = 0; //합계 변수
	/*
	   n = 0, total = 0
	   n = 1, total = 0 + 1 = 1
	   n = 2, total = 1 + 2 = 3
	   ...
	          total = total + n
	*/
	while (n < 10) {
		n++;
		total += n; //total = total + n;
		printf("n = %d, total = %d\n", n, total);
	}
	printf("합계: %d, n: %d\n", total, n);

	return 0;
}