#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
   ���� ���("w") - ���Ͽ� ������ ������ �ʱ�ȭ ��
   �߰� ���("a") - ������ �������뿡 �߰��� �� ���
*/

int main()
{
	FILE* fp;
	char msg[] = "����� �����";

	//���� ����
	fp = fopen("c:/cfile/out.txt", "a");

	//���� ���� �߰�
	fputs("banana", fp);
	//fprintf(����������, ���Ĺ���, ������)
	fprintf(fp, "%s\n", msg);

	fclose(fp);  //���� ����

	//���� �б�
	char str[128];  //���� ������ ������ �迭
	fp = fopen("c:/cfile/out.txt", "r");

	//�� �� ���� �б� - fgets(�迭, �迭�� ũ��, ����������) : ���� ���� ���� �б�
	/*fgets(str, sizeof(str), fp);
	printf("%s", str);*/

	//��ü �б�(��� ���� �б�)
	while ((fgets(str, sizeof(str), fp)) != NULL) { //�迭 ��� ����-NULL
		printf("%s", str);
	}

	return 0;
}