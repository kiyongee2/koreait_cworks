#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    �ƽ�Ű ���� �б�
*/
int main()
{
	FILE* fp; //���� ����ü ������
	int ch;   //���� ���� ������ ����(�ڵ尪)

	//���� ����
	fp = fopen("c:/cfile/ascii.txt", "r");

	//���� �б� - fgetc()
	while ((ch = fgetc(fp)) != EOF) { //EOF = -1
		printf("%c", ch);
	}

	//���� ����
	fclose(fp);

	return 0;
}