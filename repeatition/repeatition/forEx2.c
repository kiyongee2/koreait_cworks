#define _CRT_SECURE_NO_WARNINGS  //scanf() ���� ó��
#include <stdio.h>
/*
	1���� 5���� ���ϱ�
	1x2x3x4x5 = 5!(���丮��)
	gob = 1
	gob = gob * 1
*/
int main()
{
	int gob = 1; //���� �����
	int num;     //���� ���ᰪ

	printf("�� ���� ���ұ��? ");
	scanf("%d", &num); //�Է½ÿ� �ּҿ�����(&) ����

	for (int i = 1; i <= num; i++) {
		gob *= i; //gob = gob * i;
		//printf("i = %d, gob = %d\n", i, gob);
	}

	printf("�����: %d\n", gob);

	return 0;
}