#include <stdio.h>

int main()
{
	//������ �迭 ����� ���ÿ� �ʱ�ȭ(�� ����)
	int a[4] = { 10, 20, 30, 40 };
	int* pa;  //�迭 a�� ���� �ּҸ� ������ pa ������ ����

	//�迭�� �����ּҴ� �迭�� �̸��̴�.
	/*printf("%d %x %x\n", a[0], &a[0], a);     //10 cf6ff7d8 cf6ff7d8
	printf("%d %x %x\n", a[1], &a[1], a + 1); //20 b2eff6cc b2eff6cc*/

	pa = a; //&a[0];

	/*printf("%d %x\n", *pa, pa);         //10 2a8ffb98
	printf("%d %x\n", *(pa + 1), pa + 1); //20 2a8ffb9c*/

	//�迭�� ũ��(�迭 ��üũ�� / ��� 1���� ũ��)
	int len = sizeof(a) / sizeof(a[0]); //4 = 16 / 4 

	for (int i = 0; i < len; i++) {
		printf("%d %x\n", *(pa + i), pa + i);
	}

	//�迭�� ������ �ڷ����� ũ�� - sizeof()
	//�����ʹ� �ڷ����� ������� ��� 8byte
	printf("a�� ũ��: %dbyte, pa�� ũ��: %dbyte\n", sizeof(a), sizeof(pa)); //16 8

	return 0;
}