#include <stdio.h>

int main()
{
	int age = 21;
	char name[10] = "������";

	printf("%d\n", age);  //21
	printf("%s\n", name); //������

	//name �迭�� �ּ�
	//�迭�� �̸��� �迭�� ���� �ּ��̴�.
	printf("%x %x\n", &name[0], &name[1]);
	printf("%x %x\n", name, name + 1);

	return 0;
}