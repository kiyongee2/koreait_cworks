#include <stdio.h>

/*
  �Լ��� main() �Ʒ��� ��ġ�ϸ�
  �Լ� ����� ���
*/ 
int square(int x); //����� 
int myAbs(int x);

int main()
{
	int value1, value2;

	//������ ��� �Լ� ȣ��
	value1 = square(4);

	//���밪 ��� �Լ� ȣ��
	value2 = myAbs(-8);

	printf("������: %d\n", value1);
	printf("���밪: %d\n", value2);

	return 0;
}

//�Լ� ����
int square(int x) { //int x(�Ű�����) = 4
	return x * x;
}

int myAbs(int x) {
	//x�� ����̸� ����� ����
	//x�� �����̸� ����� ����
	if (x < 0)
		return -x;
	else 
		return x;
}
