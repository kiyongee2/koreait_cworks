#define _CRT_SECURE_NO_WARNINGS //strcpy() �������
#include <stdio.h>
#include <string.h>
/*
    typedef Ű���带 ���δ�.
	typdedef struct{

	}����ü�̸�;
*/
#define SIZE 3   //����ü �迭�� ũ��(��ũ�� ���)

//��� ����ü
typedef struct {
	int id;        //��� ���̵�
	char name[20]; //��� �̸�
	int salary;    //�޿�
}Employee;

//��� ���� ��� �Լ�
void printInfo(Employee e) {
	printf("���ID: %d, �̸�: %s, �޿�: %d\n", e.id,
		e.name, e.salary);
}

int main()
{
	//Employee ���� ����
	/*Employee e1;

	//�Է�(�ʱ�ȭ)
	e1.id = 1;
	strcpy(e1.name, "�̻��");
	e1.salary = 3000000;*/

	Employee e1 = { 1, "�̻��", 3000000 };

	//��� ���� ���
	printInfo(e1);  //�Ű������� ����ü ������ ����
	printf("=========================================\n");

	//����ü �迭 ����
	Employee employees[SIZE] = {
		{1, "����", 2000000},
		{2, "�ڴ븮", 3000000},
		{3, "�ְ���", 4000000},
	};

	//Ư�� ���� �˻� - ��� ���̵� 2�� ����� �̸� �˻�
	printf("%d %s\n", employees[1].id, employees[1].name);

	printf("=============== �� �� �� �� ===============\n");
	for (int i = 0; i < SIZE; i++) {
		printInfo(employees[i]);
	}

	return 0;
}