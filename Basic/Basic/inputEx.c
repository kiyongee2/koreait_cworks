#define _CRT_SECURE_NO_WARNINGS  //scanf()�� ���� ���� ó��
#include <stdio.h>
//�Է� ó�� - scanf()
int main()
{
	int iNum;
	float fNum;
	char str[40];  //���ڿ�(�迭)

	printf("���� �Է�: ");
	scanf("%d", &iNum); //�ּҿ�����(&) �տ� ����

	printf("�Էµ� ����: %d\n", iNum);
	printf("�Էµ� ������ �ּ�: %x\n", &iNum);

	printf("�Ǽ� �Է�: ");
	scanf("%f", &fNum);
	printf("�Էµ� �Ǽ�: %f\n", fNum);
	printf("�Էµ� �Ǽ��� �ּ�: %x\n", &fNum);

	//�迭�� �ּ� ������(&) ��� ����
	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	printf("�Էµ� ���ڿ�: %s\n", str);
	printf("�Էµ� �Ǽ��� �ּ�: %x\n", str);
	return 0;
}