#include <stdio.h>

void swap(int* x, int* y) {
	//��ȯ �ڵ�
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void calcSum(int min, int max) {
	int i;
	int sum;

	//ù��° ���ڰ� �ι�° ���ں��� ũ��
	if (min > max)
		swap(&min, &max); //swap(�ּ�����) ȣ��

	printf("%d", min);
	sum = min;
	for (i = min + 1; i <= max; i++) {
		printf("+%d", i);  //1+2+3+4+5
		sum += i;
	}
	printf("=%d\n", sum);
	printf("%d���� %d������ ���� %d\n", min, max, sum);
}

int main()
{
	calcSum(1, 5);
	calcSum(5, 1);

	return 0;
}