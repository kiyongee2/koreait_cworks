#include <stdio.h>

int main()
{
	//���ڿ��� �迭�� ����
	//�ε��� ������ ���� �������� 1�� ���ƿ�
	//���ڿ��� ������ �ι���('\0') ���ԵǾ� ����
	char fr1[6] = "apple";
	char fr2[6] = { 'a', 'p', 'p', 'l', 'e', '\0' };
	//�ѱ��� �� ���ڿ� 2����Ʈ
	char fr3[] = "�ٳ���"; 

	//���� ���� : %d-����, %c-�ѹ���, %s-���ڿ�
	printf("%s %d\n", fr1, sizeof(fr1));  //apple, 6
	printf("%s %d\n", fr2, sizeof(fr2));  //apple, 6
	printf("%s %d\n", fr3, sizeof(fr3));  //�ٳ���, 7


	return 0;
}