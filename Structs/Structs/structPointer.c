#include <stdio.h>

/*
	����ü ������
	- ����ü ������ ������ ���� ������(->)�� ����Ѵ�.
*/

typedef struct {
	int no;        //��ȣ(4b)
	char name[20]; //�̸�(20b)
	int age;       //����(4b)
}Hero;

int main()
{
	//����ü ���� ����� �ʱ�ȭ(�� ����)
	Hero h1 = { 1, "����", 39 };

	printf("��ȣ: %d, �̸�: %s, ����: %d\n", h1.no,
		h1.name, h1.age);

	//����ü ������ ����� �ʱ�ȭ
	Hero h2 = { 2, "�̼���", 54 };
	Hero* ptr = &h2;  //h2�� �ּ� ����(8b)

	printf("��ȣ: %d, �̸�: %s, ����: %d\n", ptr->no,
		ptr->name, ptr->age);

	return 0;
}











