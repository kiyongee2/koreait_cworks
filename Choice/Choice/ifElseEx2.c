#define _CRT_SECURE_NO_WARNINGS  //scanf() ���� ó��
#include <stdio.h>

/*
   if ~ else ����
   - ����: ���尴 ���� ���� �¼��� �ټ� ��� ���α׷�
   - ���尴��: 22, �¼���: 5 
   - �ټ�: 4 + 1(�� �ʿ�) -> ������ �������� ������ 1���� �ʿ���
   
*/

int main()
{
	int customer;
	int column;
	int row;  //�� ���� �������� ����

	printf("���尴 �� �Է�: ");
	scanf("%d", &customer); //customer�� �ּҸ� ����

	printf("�¼��� �� �Է�: ");
	scanf("%d", &column);  //column�� �ּ� ����

	if (customer % column == 0) { //������ ��������
		row = customer / column;
	}
	else {//customer % column != 0 //������ �������� ������ 1�� �� �ʿ���
		row = (customer / column) + 1;
	}

	printf("%d���� �ʿ��մϴ�.\n", row);

	return 0;
}