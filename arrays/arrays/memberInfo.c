#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    ȸ�� ���� �Է°� ���
	- ���̵�, ��й�ȣ, �̸�, ������, Ű
*/

int main()
{
	char id[20];
	char password[256];
	char name[30];
	float weight;
	float height;

	printf("===== ȸ�� ���� �Է� =====\n");
	printf("���̵� �Է�: ");
	scanf("%s", id);

	printf("��й�ȣ �Է�: ");
	scanf("%s", password);

	printf("�̸� �Է�: ");
	scanf("%s", name);

	printf("������ �Է�: ");
	scanf("%f", &weight);

	printf("Ű �Է�: ");
	scanf("%f", &height);

	printf("===== ȸ�� ���� ��� =====\n");
	printf("���̵�: %s\n", id);
	printf("��й�ȣ: %s\n", password);
	printf("�̸�: %s\n", name);
	printf("������: %.1f\n", weight);
	printf("Ű: %.1f\n", height);

	return 0;
}