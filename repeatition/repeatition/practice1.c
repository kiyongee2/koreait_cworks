#include <stdio.h>
//1���� �������� ������ 100�� �Ѵ� �ڿ����� �հ踦���ϼ���.
int main()
{
	int n = 1;
	int sum = 0;
	
	while (1)
	{
		sum += n;
		if (sum > 100)
			break;
		n++;
		
	}
	printf("N = %d\n", n);
	printf("SUM = %d\n", sum);
		
	return 0;
}