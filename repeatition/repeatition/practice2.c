#include <stdio.h>
//�������� �ܺ��� ���ϴ¼��� �۰ų� ���������� ����ϴ� ���α׷�
int main()
{
	/*for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}*/

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (i >= j) 
				printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}