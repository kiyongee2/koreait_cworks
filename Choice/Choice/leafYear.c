#define _CRT_SECURE_NO_WARNINGS //scanf() - ���� ó��
#include <stdio.h>
/*
    ����(2�� 29�ϱ��� �ִ���) ����
	- 4�⿡ �ѹ� ������ �ְ�, 100�� ����� ������ �ƴϴ�.
	- 400�⿡ �ѹ� �����̴�.
*/
int main()
{
	int year;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("������ �ƴմϴ�.\n");
	}

	return 0;
}