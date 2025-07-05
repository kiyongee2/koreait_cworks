#include <stdio.h>

int main()
{
	//자리배치도 프로그램
	int customer, column, row;
	int i, j, num;

	printf("입장객 수 입력: ");
	scanf_s("%d", &customer);

	printf("좌석열 수 입력: ");
	scanf_s("%d", &column);

	//row 계산
	if (customer % column == 0) {
		row = customer / column;
	}
	else {
		row = customer / column + 1;
	}
	//printf("%d줄이 필요합니다.", row);
	//자리 배치
	printf("========== 자리 배치도 ==========\n");
	for (i = 0; i < row; i++) { //행(row)
		for (j = 1; j <= column; j++) { //열(column)
			num = column * i + j;
			if (num > customer)
				break;
			printf("좌석%d ", num);
		}
		printf("\n");
	}

	return 0;
}