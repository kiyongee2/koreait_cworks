#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
   �ǽ� ���� - ���Ͽ� ������ ����
*/
int main()
{
	FILE* fp;

	//���� ��ġ - ������Ʈ ���ο� ����
	fp = fopen("gugudan.txt", "w");
	if (fp == NULL) {
		puts("���� ���⿡ �����߽��ϴ�.\n");
		return -1;
	}

	//������ ����
	fputs("*** ������(2 ~ 9) ***\n", fp);

	//�ڵ� �ۼ�
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			fprintf(fp, "%d x %d = %d\n", i, j, (i * j));
		}
		fprintf(fp, "\n");
	}

	fclose(fp);  //���� ����(����)

	//������ ���� �б�
	char buf[256];  //������ ���� ���� ����

	fp = fopen("gugudan.txt", "r");
	if (fp == NULL) {
		puts("���� ���⿡ �����߽��ϴ�.\n");
		return -1;
	}

	//���� �б�
	while ((fgets(buf, sizeof(buf), fp)) != NULL) {
		printf("%s", buf);
	}

	fclose(fp); //���� ����(�б�)

}