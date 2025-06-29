#include <stdio.h>
//구구단을 단보다 곱하는수가 작거나 같은경우까지 출력하는 프로그램
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