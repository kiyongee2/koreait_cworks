#include <stdio.h>

int main()
{
	int x = 10, y = 20, z;
	int* arr[3];  //������ ������ �迭

	//�ּ� ����
	arr[0] = &x;
	arr[1] = &y;
	arr[2] = &z;

	//����� ���ÿ� �ʱ�ȭ
	//int* arr[3] = { &x, &y, &z };

	//�������� ����
	*arr[2] = *arr[0] + *arr[1];
	printf("%d\n", *arr[2]); //30
	printf("%d\n", z); //30


	return 0;
}