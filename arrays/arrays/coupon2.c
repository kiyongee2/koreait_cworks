#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�λ�ȸ�� ������ ��û ���α׷�
int main()
{
	char birthYear[5];  //������� - 4�ڸ� + �ι���
	char lastDigit;     //������� ���ڸ�

	printf("������� �Է�: ");
	scanf("%s", birthYear);

	//��������� ���ڸ��� ��(if, switch)
	lastDigit = birthYear[3]; //��) 2005 -> '5'(���ڸ�)

	if (strlen(birthYear) != 4) {
		//���� ����
		printf("��������� 4�ڸ� �Դϴ�. �ٽ� �Է��ϼ���\n");
	}
	else {
		//���� ����
		if (lastDigit == '1' || lastDigit == '6') {
			printf("��û���� �������Դϴ�.");
		}
		else if (lastDigit == '2' || lastDigit == '7') {
			printf("��û���� ȭ�����Դϴ�.");
		}
		else if (lastDigit == '3' || lastDigit == '8') {
			printf("��û���� �������Դϴ�.");
		}
		else if (lastDigit == '4' || lastDigit == '9') {
			printf("��û���� ������Դϴ�.");
		}
		else if (lastDigit == '5' || lastDigit == '0') {
			printf("��û���� �ݿ����Դϴ�.");
		}
		else {
			printf("��ȿ���� ���� �Է��Դϴ�.");
		}
	}
	

	return 0;
}