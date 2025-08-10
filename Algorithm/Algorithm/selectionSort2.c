#include <stdio.h>
/*
	���� ����(selection sorting)
	- �迭���� ���� ���� ���� ã�Ƽ� �� ������ ������ ���
	- ù°���� i=0�� �ּҰ����� ����
	- ��°���� i=1�� �ּҰ����� ����
	... �ݺ�
*/
void selectionSorting(int a[], int n) {
	int i, j, temp, minIdx;

	//�񱳿� ��ȯ �ݺ�
	for (i = 0; i < n - 1; i++) {
		minIdx = i;  //���� ��ġ(��)�� �ּҰ����� ����
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[minIdx])
				minIdx = j; //���� �ּҰ� ��ġ ����
		}

		//��ȯ ó��
		temp = a[i];
		a[i] = a[minIdx];
		a[minIdx] = temp;
	}
}

int main()
{
	int arr[] = { 41, 36, 8, 77, 15 };
	int i, size;

	size = sizeof(arr) / sizeof(arr[0]);

	//���� ���� �Լ� ȣ��
	selectionSorting(arr, size);

	//�� ��ȯ�� ���� ���
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}