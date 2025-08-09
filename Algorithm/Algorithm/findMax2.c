#include <stdio.h>
/*
    �迭���� �ִ밪 ã��
	- �� �� ��Ҹ� �ִ밪���� ����
	- ��� ũ�⸦ �� - �ݺ���
*/

//findMax(�迭, �迭�� ũ��)
int findMax(int a[], int n) {
	int max = a[0]; //ù ����� �ִ밪
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

//findMaxIdx(�迭, �迭�� ũ��)
int findMaxIdx(int a[], int n) {
	int maxIdx = 0; //ù����� �ִ밪�� ��ġ
	for (int i = 0; i < n; i++) {
		if (a[i] > a[maxIdx])
			maxIdx = i; //�ִ밪 ��ġ ����
	}
	return maxIdx;
}

int main()
{
	int arr[] = { 53, 11, 65, 80, 36, 29 };
	int max, maxIdx, size;

	//�迭�� ũ��
	size = sizeof(arr) / sizeof(arr[0]); //4*6=24byte, 24/4=6
	printf("%d %d\n", sizeof(arr), sizeof(arr[0])); //24 4

	//�ִ밪 ã�� �Լ� ȣ��
	max = findMax(arr, size);

	//�ִ밪 ��ġ ã�� �Լ� ȣ��
	maxIdx = findMaxIdx(arr, size);
	
	printf("�ִ밪: %d\n", max); //80
	printf("�ִ밪�� ��ġ: %d\n", maxIdx); //3

	return 0;
}