#include <stdio.h>

/*
    - �ݺ� ���ǹ�(while ~ if ~ break)
	- ���� : 1���� 10���� �հ�
*/

int main()
{
	int n = 1;
	int sum = 0;

	while (1) { //���� �ݺ���
		if (n > 10)  //n = 11�϶� Ż��
			break;
		sum += n;
		//printf("%-3d", n); //3ĭ�� ����� ���� ����
		n++;
	}
	printf("�հ�: %d, n: %d\n", sum, n);

	return 0;
}