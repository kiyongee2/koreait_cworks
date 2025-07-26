#include <stdio.h>

void swap(int* x, int* y) {
	//교환 코드
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void calcSum(int min, int max) {
	int i;
	int sum;

	//첫번째 인자가 두번째 인자보다 크면
	if (min > max)
		swap(&min, &max); //swap(주소전달) 호출

	printf("%d", min);
	sum = min;
	for (i = min + 1; i <= max; i++) {
		printf("+%d", i);  //1+2+3+4+5
		sum += i;
	}
	printf("=%d\n", sum);
	printf("%d에서 %d까지의 합은 %d\n", min, max, sum);
}

int main()
{
	calcSum(1, 5);
	calcSum(5, 1);

	return 0;
}