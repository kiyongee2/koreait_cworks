#include <stdio.h>
/*
   �˰���(Algorithm)
   - � ������ �ذ��ϱ� ���� ������ ����� ���Ѵ�.
*/
int main()
{
	//1���� 5������ �հ�
	//�ܼ� �հ�
	printf("%d\n", 1 + 2 + 3 + 4 + 5);


	//for�� ���
	int i, sum = 0;

	for (i = 1; i <= 5; i++) {
		sum += i; //sum = sum + i;
	}
	printf("%d\n", sum);

	return 0;
}