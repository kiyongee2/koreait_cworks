#include <stdio.h>

/*
    1���� 10������ �ڿ��� �� ¦���� ��
	- while�� ���
*/

int main()
{
	//int n = 0;

	/*while (n < 10) {
		//¦���� ���
		n++; //n = n + 1;
		if (n % 2 == 0) {
			printf("%d ", n);
		}
	}*/

	//���� �ݺ���(break)
	int n = 0;
	int evenSum = 0;  //¦���� ��
	while (1) { //��(1), ����(0)
		if (n > 10) break;
		n++;
		if (n % 2 == 0) {
			evenSum += n;
			//evenSum = evenSum + n;
			//printf("%d ", n); //2, 4, 6, 8, 10
		}
	}
	printf("¦���� ��: %d\n", evenSum);

	return 0;
}