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
	//����ü �迭 ����
	struct Person p[3] = {
		{"�̻�", 15, 171.9f},
		{"�Ѱ�", 35, 163.3f},
		{"�ں�", 22, 175.4f},
	};
	int i;

	for (i = 0; i < 3; i++) {
		printf("�̸�: %s, ����: %d, Ű: %.1f\n",
			p[i].name, p[i].age, p[i].height);
	}
	
	return 0;
}