#include <stdio.h>

int main()
{
	//������ ������ �迭 ���� �� �ʱ�ȭ
	int a[3][2] = { 
		75, 80, 
		85, 95, 
		90, 100 
	};

	//Ư�� ��� �˻�
	printf("%d\n", a[0][0]);  //75
	printf("%d\n", a[1][1]);  //95

	//��ü ���1 - ��(����), ��(���)
	for (int x = 0; x < 3; x++) {
		printf("%d %d\n", a[x][0], a[x][1]);
	}
	printf("=====================\n");

	//��ü ���2 - ��(����), ��(����)
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 2; y++) {
			printf("%d ", a[x][y]);
		}
		printf("\n");
	}

	//������ ������ �迭�� ���� ����
	//1���� ���������� ����
	int arr[3][3];
	int k = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			k++; //1 ����
			arr[i][j] = k;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}