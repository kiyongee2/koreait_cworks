#include <stdio.h>

typedef struct {
	char name[20]; //���ϸ�
	int quantity;  //����
	char* brand;   //�귣��(���ڿ� ������ ������)
}Fruit;

int main()
{
	//����ü ���� ����
	char* brand[] = { "û�ۻ��", "���ֻ��", "�������" };

	Fruit f = { "���", 100, brand[0]};
	Fruit* p;  //f�� �ּҸ� ������ ������ ����

	puts("=== ����ü ������ ��� ===");
	printf("�����̸�: %s\n", f.name);
	printf("����: %d\n", f.quantity);
	printf("�귣��: %s\n", f.brand);

	p = &f; //f�� �ּ� ����

	puts("\n=== ����ü �����ͷ� ��� ===");
	printf("�����̸�: %s\n", p->name);
	printf("����: %d\n", p->quantity);

	f.brand = "���ֻ��";
	printf("�귣��: %s\n", p->brand);

	return 0;
}