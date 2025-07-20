#define _CRT_SECURE_NO_WARNINGS //strcpy() �������
#include <stdio.h>
#include <string.h>  //���ڿ� ���� �Լ� ���̺귯��
/*
    # strlen(���ڿ�) - ���ڿ��� ����
	# strcpy(������ �迭, ������ ���ڿ�)
	# strcmp(str1, str2) - ���ڿ� ��ġ ���� ��
*/
int main()
{
	char msg1[] = "Good Luck!";
	char msg2[20];
	int len;

	len = strlen(msg1);  //���鹮��, Ư������ ����

	//msg1�� msg2�� ����(����)
	strcpy(msg2, msg1);

	printf("msg1�� ����: %d\n", len);  //10
	printf("msg2: %s\n", msg2);  //Good Luck!
	printf("-------------------------------\n");

	//���ڿ� ��ġ ���� ��
	//��ҹ��� ������
	char greet1[] = "bye";
	char greet2[] = "Bye";
	int result;

	result = strcmp(greet1, greet2); //��ġ-0, ����ġ-1
	//printf("result = %d\n", result); 

	if (strcmp(greet1, greet2) == 0) {
		puts("�� ���ڿ��� ��ġ�մϴ�.");
	}
	else {
		puts("�� ���ڿ��� ��ġ���� �ʽ��ϴ�.");
	}


	return 0;
}