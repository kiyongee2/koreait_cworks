#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    ���� �Է½� ���� �Է� ���� ó��
*/
int getValidInt() {
	int num, result;

	while (1) {
		puts("������ �Է��ϼ���:");
		result = scanf("%d", &num); //���� �Է�-1, ���� �Է�-0
		//printf("result = %d\n", result);
		if (result) { //result == 1
			return num;  //num ���� ȣ���� ���� ��ȯ��
		}
		else { //result == 0
			puts("��ȿ�� ������ �Է��ϼ���.");
			while (getchar() != '\n'); //'\n' �տ� �Էµ� ��� ���� ����(���)
		}
	}
}

int main()
{
	int number;

	number = getValidInt();
	printf("�Էµ� ����: %d\n", number);

	return 0;
}