#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    ����ü �ڷ��� ����Ͽ� ���� ����/�б�
*/

//Person ����ü ����
typedef struct {
	char name[20];   //�̸�
	int age;  //����
}Person;

int main()
{
	FILE* fp;
	Person p1 = {"������", 26}; //����ü ���� ����
	Person p2;  //���� ������ ������ ����ü ����

	//���� ���� ����
	fp = fopen("person.txt", "w");
	if (fp == NULL) {
		puts("���� ���⿡ �����߽��ϴ�.\n");
		return -1;
	}

	//���� ����
	fprintf(fp, "%s %d\n", p1.name, p1.age);

	fclose(fp);

	//���� �б�
	fp = fopen("person.txt", "r");
	if (fp == NULL) {
		puts("���� ���⿡ �����߽��ϴ�.\n");
		return -1;
	}

	//���� �б�(�Է�) - fscanf(����������, ���Ĺ���, ������ �ּ�)
	fscanf(fp, "%s %d", p2.name, &p2.age);

	fclose(fp);

	printf("�̸�: %s, ����: %d\n", p2.name, p2.age);

	return 0;
}