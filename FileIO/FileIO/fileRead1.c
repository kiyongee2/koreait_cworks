#define _CRT_SECURE_NO_WARNINGS //fopen()
#include <stdio.h>
/*
	���� �����
	- �ؽ�Ʈ ��� ���� �����
	- ���� ����ü ������ ���� -> ���� ���� -> ���� �б� -> ���� ����
*/

int main()
{
	FILE* fp;

	fp = fopen("c:/cfile/out.txt", "r");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return -1;
	}

	//���� �б� - fgetc()
	int ch;  //���� ���� ����(�ƽ�Ű �ڵ尪)

	//���� 1�� �б�
	/*ch = fgetc(fp);
	printf("%c\n", ch);*/

	//���� ��ü �б�
	/*while (1) {
		ch = fgetc(fp);
		if (ch == -1)
			break;
		printf("%c", ch);
	}*/

	while ((ch = fgetc(fp)) != EOF) { //End Of File(-1)
		printf("%c", ch);
	}

	//���� ����
	fclose(fp);

	return 0;
}