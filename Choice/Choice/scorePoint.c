#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    = ���� ���ǹ�(if ~ else if ~ else ����)
	- ����: ������ ������ ���� ���� ���
	  .90 ~ 100��: A -> ������ 90 �̻��̰�, 100 ������
	  .80 ~ 89��: B
	  .70 ~ 79��: C
	  .70�� �̸�: D
*/

int main()
{ 
	int score;  //������ ����
	char grade;      //����

	printf("���� �Է�: ");
	scanf("%d", &score);

	if (score >= 90 && score <= 100) { // ��(1) && ��(1)
		grade = 'A'; //1���� ���ڴ� Ȭ����ǥ ���
	}
	else if (score >= 80 && score < 90) {
		grade = 'B';
	}
	else if (score >= 70 && score < 80) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}

	printf("������ %d���̰�, ������ %c�Դϴ�.\n", score, grade);
	printf("������ �ּ� %x�̰�, ������ �ּ� %x�Դϴ�.\n", &score, &grade);

	return 0;
}