#include <stdio.h>
/*
   ���� - �����͸� ������ �δ� �޸� ����(�̸�)
          �� ������ �� ���� ���� ����
*/
int main()
{
	//������ ���� ����
	int n1 = 10;

	//�Ǽ��� ���� ���� - ī��ǥ���
	float rateOfBirth = 0.75f; //'f' or 'F'�� ���� ����
	double rateOfBirth2 = 0.75; //double�� ǥ��

	//�޸��� �ּ�(����) - %x, �ּ� ������(&) - ���ξ ����
	//double���� ���Ĺ��� - %lf
	printf("%d %x %dbyte\n", n1, &n1, sizeof(n1));
	printf("%.2f %x %dbyte\n", 
		rateOfBirth, &rateOfBirth, sizeof(rateOfBirth));
	printf("%.2lf %x %dbyte\n", 
		rateOfBirth2, &rateOfBirth2, sizeof(rateOfBirth2));

	//������ ���� ����
	char grade = 'B';
	//�迭 �ڷ��� - ���� ���� ���� ����
	char nameOfFruit[] = "���"; 

	//�޸��� ũ�� ���� �Լ� - sizeof()
	printf("%c %dbyte\n", grade, sizeof(grade));
	printf("%s %dbyte\n", nameOfFruit, sizeof(nameOfFruit));

	return 0;
}