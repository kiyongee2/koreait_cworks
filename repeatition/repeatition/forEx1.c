#include <stdio.h>
/*
	for(�ʱⰪ; ���ᰪ; ������;){ ���๮ }

*/

int main()
{
	/*int n = 1;
	printf("n = %d\n", n); //1

	n++; //n = n + 1;
	printf("n = %d\n", n); //2

	n++;
	printf("n = %d\n", n); //3*/

	//1���� 10������ �հ�
	int sum = 0;
	for (int n = 1; n <= 10; n++) {
		sum += n; //sum = sum + n;
		//printf("%-3d", n);
		printf("n = %d, sum = %d\n", n, sum);
	}
	printf("�հ�: %d\n", sum);

	return 0;
}