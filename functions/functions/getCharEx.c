#include <stdio.h>

int main()
{
	//���� 1�� �Է� - getchar();
	char c1, c2;

	printf("���� 1�� �Է�: ");
	c1 = getchar();

	//'\n'�� ������ ������ ���� ���
	while (getchar() != '\n');

	c2 = getchar();

	printf("�Էµ� ����: %c %c\n", c1, c2);


	return 0;
}