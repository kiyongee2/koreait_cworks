#include <stdio.h>

int main()
{
	char c1 = 'A';
	char* c2;

	c2 = &c1;  //c1�� �ּҸ� ����

	*c2 = 'B';  //�� ����

	printf("%c %x\n", c1, &c1); //B b7cffc74

	//�����Ͱ� ����Ű�� ��(������) - *c2
	printf("%c %x\n", *c2, c2); //B b7cffc74

	return 0;
}