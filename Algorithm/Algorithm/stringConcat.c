#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
    - ���ڿ� ����
	  �� ���� ���ڿ��� �����Ͽ� �ϳ��� ���ڿ��� �����
	  "smart" + "phone" + '\0' = �� 11����Ʈ �ʿ�
*/

int main()
{
	//b�� a�� ��ġ��
	char a[12] = "smart";  //����� ũ�� Ȯ��
	char b[] = "phone";
	int i = 0, j = 0;  //�ݺ� ����

	printf("%s+%s=", a, b); //smart+phone=
	while (a[i] != '\0')
		i++;
	//printf("\ni=%d\n", i);
	while (b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0'; //a�� ���
	printf("%s\n", a); //smartphone
	/*
	                 i��
		i=0, a[0]=s, 1
	    i=1, a[1]=m, 2
	    i=2, a[2]=a, 3
	    i=3, a[3]=r, 4
	    i=4, a[4]=t, 5
	    i=5, a[4]='\0', �ݺ� ����
		i=6, a[6]=b[0], p
		i=7, a[7]=b[1], h
		i=8, a[8]=b[2], o
		i=9, a[9]=b[3], n
		i=10, a[10]=b[4], e
		i=11, a[11]='\0' //���ڿ��� �� 
	*/

	//strcat(������ ���, ���ڿ�) - ���ڿ� ���� �Լ�
	char str1[20] = "smart"; //����� ũ�� Ȯ��
	char str2[] = "phone";

	strcat(str1, str2);
	printf("%s\n", str1); //smartphone
	return 0;
}