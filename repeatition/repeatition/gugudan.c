#define _CRT_SECURE_NO_WARNINGS  //scanf() 보안 처리
#include <stdio.h>
/*
	- 단을 입력받아서 구구단을 출력
	  4 x 1 = 4(4*1)
	  4 x 2 = 8(4*2)
	  ...
*/
int main()
{
	/*int dan;

	printf("단을 입력하세요: ");
	scanf("%d", &dan);

	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}*/

	//구구단 전체
	int dan;
	int i;

	for (dan = 2; dan <= 9; dan++) {
		printf(" [%d] 단\n", dan);
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", dan, i, (dan * i));
		}
		printf("\n");
	}

	return 0;
}