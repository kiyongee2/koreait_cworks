#include <stdio.h>
/*
   ���� �˰���
   - ���� ����: �迭���� ������ �� ���� ��Ҹ� ���Ͽ� �ڸ��� �ٲٴ� ���
   - ����� ������ n���� �迭���� n-1ȸ �� �� ��ȯ��
   - ��ø for��(������-��, ��)
   - �������� ���� ����
   - �ð� ���⵵ : n * n -> O(n����)
*/

//bubbleSorting(�迭, �迭�� ũ��)
void bubbleSorting(int a[], int n) {
	int i, j, temp;  //temp(��ȯ�� ���� �ӽú���)

	//�񱳿� ��ȯ �ݺ�
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1-i; j++) {
			//�� ����
			if (a[j] > a[j + 1]) { //"<" �������� ����
				//��ȯ ó��
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 41, 8, 36, 77, 15, 28 };
	int size; //�迭�� ũ��
	size = sizeof(arr) / sizeof(arr[0]);
	//���� ���� �Լ� ȣ��
	bubbleSorting(arr, size);

	//���
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);  //8 15 36 41 77
	}

	return 0;
}