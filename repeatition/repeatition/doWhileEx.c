#include <stdio.h>

int main()
{
	//1~10 ������ �ڿ��� �� Ȧ���� ���
	int n = 1;

	/*while (n <= 10) {
		if (n % 2 == 1) {
			printf("%3d", n);
		}
		n++;
	}*/

	//do ~ while��
	/*do {
		if (n % 2 == 1) {
			printf("%-3d", n);
		}
		n++;
	} while (n <= 10);*/


	//do ~ while���� ����ϴ� ����
	int num = -1;

	/*while (num != -1) { //����� false �̹Ƿ� ������ �� ����
		printf("���� �Է�(-1 �Է½� ����):");
		scanf_s("%d", &num);
	}*/

	do {
		printf("���� �Է�(-1 �Է½� ����): ");
		scanf_s("%d", &num);
	} while (num != -1);


	return 0;
}