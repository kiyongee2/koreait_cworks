#include <stdio.h>

int main()
{
	int floor;

	printf("���� ���� ���� ��������: ");

	//scanf_s() - ���� ó�� �� �ʿ����
	scanf_s("%d", &floor);  //�ּҿ�����(&) ���̱�

	switch (floor) {
	case 1:
		printf("1���� �������ϴ�.\n");
		break;
	case 2:
		printf("2���� �������ϴ�.\n");
		break;
	case 3:
		printf("3���� �������ϴ�.\n");
		break;
	defalut:
		printf("�ǹ��� ���� ���Դϴ�.\n");
		break;
	}

	return 0;
}