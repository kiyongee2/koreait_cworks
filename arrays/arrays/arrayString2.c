#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //ǥ�� �����
#include <string.h> //���ڿ� ���� �Լ�

int main()
{
	/*int arr[4] = {3, 5, 2, 7};
	int i;

	//printf("%d\n", arr[1]); //5*/

	//����� �Է�
	/*int arr[4];
	int i;

	printf("*** �迭�� ����� �Է� ***\n");
	for (i = 0; i < 4; i++) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}

	//��ü ���
	for (i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}*/

	//������ �迭
	char str1[] = "apple";  //�� ���� '\0'
	char str2[6];
	int len;

	printf("str1: %s\n", str1); //apple

	//�ε��� - �� ���ڿ� ����
	printf("%c\n", str1[0]); //a
	printf("%c\n", str1[4]); //e

	//���ڿ� �迭�� ũ��(�޸�) - sizeof()
	printf("�迭�� ũ��: %d��\n", sizeof(str1));  //6

	//���ڿ��� ���� - strlen()
	len = strlen(str1);
	printf("������ ����: %d��\n", len);

	//str1�� str2�� ����(����) - strcpy(������ ���, ���ڿ�)
	strcpy(str2, str1);

	printf("str2: %s\n", str2);

	return 0;
}