#define _CRT_SECURE_NO_WARNINGS //fopen()
#include <stdio.h>
/*
    ���� �����
	- �ؽ�Ʈ ��� ���� �����
	- ���� ����ü ������ ���� -> ���� ���� -> ���� ���� -> ���� ����
*/

int main()
{
	FILE* fp;  //���� ������ ����

	//fopen(���� ��ġ, ���-����/�б�)
	fp = fopen("c:/cfile/out.txt", "w");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return -1;
	}

	//���� ����
	//���� 1�� ���� - fputc()
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	//���ڿ� ����
	fputs("\napple\n", fp);  //'\n' - �ٹٲ�
	fputs("���\n", fp);  //'\n' - �ٹٲ�

	//���� ����
	fclose(fp);

	return 0;
}