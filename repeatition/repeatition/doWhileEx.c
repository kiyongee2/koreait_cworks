#include <stdio.h>

int main()
{
	//1~10 까지의 자연수 중 홀수만 출력
	int n = 1;

	/*while (n <= 10) {
		if (n % 2 == 1) {
			printf("%3d", n);
		}
		n++;
	}*/

	//do ~ while문
	/*do {
		if (n % 2 == 1) {
			printf("%-3d", n);
		}
		n++;
	} while (n <= 10);*/


	//do ~ while문을 사용하는 이유
	int num = -1;

	/*while (num != -1) { //결과가 false 이므로 실행할 수 없음
		printf("숫자 입력(-1 입력시 종료):");
		scanf_s("%d", &num);
	}*/

	do {
		printf("숫자 입력(-1 입력시 종료): ");
		scanf_s("%d", &num);
	} while (num != -1);


	return 0;
}