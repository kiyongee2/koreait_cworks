#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�λ�ȸ�� ������ ��û ���α׷�
int main()
{
	char birthYear[5];  //������� - 4�ڸ� + �ι���
	char lastDigit;     //������� ���ڸ�

	printf("������� �Է�: ");
	scanf("%s", birthYear);

	if (strlen(birthYear) != 4) {
		printf("��������� 4�ڸ� �Դϴ�. �ٽ� �Է��ϼ���\n");
		return 1;  //��� ����
	}

	//��������� ���ڸ��� ��(if, switch)
	lastDigit = birthYear[3]; //��) 2005 -> '5'(���ڸ�)

	switch (lastDigit) {
	case '1': case '6':
		printf("��û���� �������Դϴ�.");
		break;
	case '2': case '7':
		printf("��û���� ȭ�����Դϴ�.");
		break;
	case '3': case '8':
		printf("��û���� �������Դϴ�.");
		break;
	case '4': case '9':
		printf("��û���� ������Դϴ�.");
		break;
	case '5': case '0':
		printf("��û���� �ݿ����Դϴ�.");
		break;
	default :
		printf("��ȿ���� ���� �Է��Դϴ�.");
	}

	return 0;
}