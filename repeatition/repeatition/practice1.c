#include <stdio.h>
//1부터 더했을때 그합이 100이 넘는 자연수와 합계를구하세요.
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