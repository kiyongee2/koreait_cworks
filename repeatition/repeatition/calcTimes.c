#include <stdio.h>

int main()
{
	//¦��/Ȧ�� ���� - 2�� ���
	// 1 ~ 10 ������ �ڿ����� ¦���� ���
	int i; //�ݺ� ����

	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0)
			printf("%3d", i);
	}
	printf("\n");

	// 1 ~ 20 ������ �ڿ����� 3�� ��� ���
	// 3�� ����� ���� ���
	int count = 0; //����
	for (i = 1; i <= 20; i++) {
		if (i % 3 == 0) {
			count++; //count = count + 1
			printf("%3d", i);
		}
	}
	printf("\n3�� ����� ����: %d\n", count);
	/*
	    i=1, 
		i=2,
		i=3, count=1, 3
		i=4;
		i=5
		i=6, count=2, 6
		...
	*/


	return 0;
}