#include <stdio.h>
#include <string.h>
/*
	���ڿ� ó�� �˰���
	- ���ڿ� �������� �ٲٱ�
*/
int main()
{
	char a[] = "Elephant";
	char b[10];  //����� ũ�� Ȯ��(4�� �̻�)
	int n;  //���ڿ��� ����
	int i;  //�ݺ� ����

	n = strlen(a); //strlen(���ڿ�) -> ���ڿ��� ����
	printf("%d��\n", n); //8

	for (i = n-1; i >= 0; i--) {
		//�ε��� - 2(G), 1(O), 0(D)
		b[n-1-i] = a[i];
	}
	b[n] = '\0';
	printf("�Ųٷ� ����: %s\n", b);

	return 0;
}