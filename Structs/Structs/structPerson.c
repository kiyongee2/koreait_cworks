#define _CRT_SECURE_NO_WARNINGS //strcpy() �������
#include <stdio.h>
#include <string.h> //strcpy()
/*
    ����ü(structure)
	 - �پ��� �ڷ����� �׷�ȭ�Ͽ� �ϳ��� ������ ó���� �� �ְ� ���� �ڷ���
	 - main() ������ ������
	 - ù���ڴ� ���������� �빮�ڷ� ������
*/
struct Person {
	//����� �Ӽ�(property)
	char name[20]; //�̸�
	int age;       //����
	float height;  //Ű
};

int main()
{
	//Person ����ü�� ����(p1) ����(����)
	struct Person p1;

	//�Ӽ��� �Է� - ����ü ������ ��(.) �����ڷ� ����
	//�迭�� ���ڿ��� �����Ҷ��� strcpy(������ ���, ���ڿ�) �� ���
	strcpy(p1.name, "�ӽÿ�");
	p1.age = 23;
	p1.height = 172.3f;

	//����ü ���� �ʱ�ȭ ����
	struct Person p2 = { "������", 26, 180.6f };

	//���� ���
	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("Ű: %.1f\n", p1.height);

	printf("�̸�: %s\n", p2.name);
	printf("����: %d\n", p2.age);
	printf("Ű: %.1f\n", p2.height);

	return 0;
}






