#include <stdio.h>

//�� ���� �ִ밪�� ���ϴ� �Լ�
int max3(int a, int b, int c) {
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;

	return max; //ȣ���� ������ ��ȯ
}

int main()
{
	//�� ���� ������ ū �� ã��
	int x = 10, y = 20;
	int result;  //�����

	result = (x > y) ? x : y;
	printf("�� ���� �� ū��: %d\n", result);

	//�� ���� ������ �ִ밪 ã��
	/*int a = 10, b = 30, c = 20;
	int max;

	//�� �տ� �ִ� ���� �ִ밪���� ����
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;*/

	//max3 �Լ� ȣ��
	printf("max3(%d, %d, %d) = %d\n", 1, 3, 2, max3(1, 3, 2));
	printf("max3(%d, %d, %d) = %d\n", 1, 2, 3, max3(1, 2, 3));
	printf("max3(%d, %d, %d) = %d\n", 2, 1, 3, max3(2, 1, 3));
	printf("max3(%d, %d, %d) = %d\n", 2, 3, 1, max3(2, 3, 1));

	return 0;
}