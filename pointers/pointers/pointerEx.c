#include <stdio.h>
/*
    ������ - �޸� �ּ�(����)�� �����ϴ� ����
*/
int main()
{
	int n = 3;
	int* pn; //������ ������ ����

	pn = &n; //�ּҸ� ����

	printf("%d %x\n", n, &n); //3, fb5fc14

	printf("%d %x\n", *pn, pn); //3, fb5fc14

	return 0;
}