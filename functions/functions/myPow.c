#include <stdio.h>
#include <math.h> //pow()

int myPow(int x, int y) {
	//1 x 2 x 2 x 2 -> 2(��)�� 3(����)����
	int num = 1;   //�ŵ������� ��
	int i; //�ݺ� ����

	for (i = 0; i < 3; i++) {
		num *= x; //num = num * x;
	}
	return num;
	/*
	  i=0, 1 x 2
	  i=1, 2 x 2
	  i=2, 4 x 2 = 2 x 2 x 2
	  i=3, �ݺ� ����
	*/
}

int main()
{
	//�ŵ� ���� - 2�� ������
	double value1;
	int value2;

	value1 = pow(2, 3); //���� �Լ� ȣ��
	value2 = myPow(2, 3); //���� ���� �Լ� ȣ��

	printf("%.lf\n", value1); //8
	printf("%d\n", value2);   //8

	return 0;
}