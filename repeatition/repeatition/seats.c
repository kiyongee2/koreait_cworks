#include <stdio.h>

int main()
{
	//�ڸ���ġ�� ���α׷�
	int customer, column, row;
	int i, j, num;

	printf("���尴 �� �Է�: ");
	scanf_s("%d", &customer);

	printf("�¼��� �� �Է�: ");
	scanf_s("%d", &column);

	//row ���
	if (customer % column == 0) {
		row = customer / column;
	}
	else {
		row = customer / column + 1;
	}
	//printf("%d���� �ʿ��մϴ�.", row);
	//�ڸ� ��ġ
	printf("========== �ڸ� ��ġ�� ==========\n");
	for (i = 0; i < row; i++) { //��(row)
		for (j = 1; j <= column; j++) { //��(column)
			num = column * i + j;
			if (num > customer)
				break;
			printf("�¼�%d ", num);
		}
		printf("\n");
	}

	return 0;
}