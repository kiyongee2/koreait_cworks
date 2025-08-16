#include <stdio.h>
/*
	�̺� �˻�
	- �̹� ���ĵ� �����͸� �¿� �ѷ� ������ ã�� ���� ������
	  �������� ����̴�.
*/
int binarySerarch(int a[], int n, int x) {
	int low, high, mid;
	low = 0;  //ù �ε���
	high = n - 1; //������ �ε���
	
	while (low <= high) {
		mid = (low + high) / 2;
		if (a[mid] == x)  //ã��
			return mid;
		else if (a[mid] < x) 
			low = mid + 1;
		else 
			high = mid - 1;
	}//while() �ݱ�
	return -1;  //ã�� ����
}

int main()
{
	int low, high, mid;
	int x, size, idx;
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	x = 3;    //ã����

	size = sizeof(arr) / sizeof(arr[0]);

	idx = binarySerarch(arr, size, x); //binarySearch() ȣ��
	if (idx == -1) 
		printf("%d��(��) �����ϴ�.\n", x);
	else
		printf("%d��(��) arr[%d]�� �ֽ��ϴ�.\n", x, idx);
	
	return 0;
}