#include <stdio.h>

/*
    1부터 10까지의 자연수 중 짝수의 합
	- while문 사용
*/

int main()
{
	//int n = 0;

	/*while (n < 10) {
		//짝수만 출력
		n++; //n = n + 1;
		if (n % 2 == 0) {
			printf("%d ", n);
		}
	}*/

	//무한 반복문(break)
	int n = 0;
	int evenSum = 0;  //짝수의 합
	while (1) { //참(1), 거짓(0)
		if (n > 10) break;
		n++;
		if (n % 2 == 0) {
			evenSum += n;
			//evenSum = evenSum + n;
			//printf("%d ", n); //2, 4, 6, 8, 10
		}
	}
	printf("짝수의 합: %d\n", evenSum);

	return 0;
}