#define _CRT_SECURE_NO_WARNINGS //fopen()
#include <stdio.h>
/*
    �ƽ�Ű �ڵ� ����
*/
int main()
{
	FILE* fp;
	int i;

	fp = fopen("c:/cfile/ascii.txt", "w");

	//���� ���� - 32��(���鹮��)
	for (i = 32; i < 128; i++) {
		if (i % 10 == 0)
			fputc('\n', fp);
		fputc(i, fp);
		fputc('\t', fp);
	}

	fclose(fp); //���� �ݱ�

	return 0;
}