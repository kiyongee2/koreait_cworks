#define _CRT_SECURE_NO_WARNINGS //scanf() ����
#include <stdio.h>

int main()
{
	int age = 21;
	char name[] = "������"; //'\0'(NUL ����) ����

	printf("%d\n", age);  //21
	printf("%s %d\n", name, sizeof(name)); //������, 7

	//name �迭�� �ּ�
	//�迭�� �̸��� �迭�� ���� �ּ��̴�.
	printf("%x %x\n", &name[0], &name[1]);
	printf("%x %x\n", name, name + 1);

	//�̸��� ���� �Է� �ޱ�
	printf("�̸� �Է�: ");
	scanf("%s", name); //�迭�̸��� & ����

	printf("���� �Է�: ");
	scanf("%d", &age); //�̸��� & ����

	printf("�̸�: %s, ����: %d\n", name, age);

	return 0;
}