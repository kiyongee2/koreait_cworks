#include <stdio.h>
/*
	- �ݺ���(while)
	  ������ �����ɶ����� ���๮�� �ݺ����� ������
	  - �ʱⰪ(1)
	  - ���ᰪ(10)
	  - ������(1 ����)
*/

int main()
{
	/*
	int n = 1;  //�ʱⰪ
	//printf("%d\n", n);

	//n++; //n = n + 1;
	//printf("%d\n", n);

	//n++;
	//printf("%d\n", n);

	while (n <= 10) { //���ᰪ
		printf("%d\n", n);
		n++;  //������
		//n += 2; //n = n + 2; //2 ����
	}
	printf("\n");

	n = 10;  //�ʱⰪ
	while (n > 0) {
		printf("%d\n", n);
		n--; //n = n - 1;
	}*/

	//1���� 10���� �հ�
	int n = 0;     //�ݺ� ����
	int total = 0; //�հ� ����
	/*
	   n = 0, total = 0
	   n = 1, total = 0 + 1 = 1
	   n = 2, total = 1 + 2 = 3
	   ...
	          total = total + n
	*/
	while (n < 10) {
		n++;
		total += n; //total = total + n;
		printf("n = %d, total = %d\n", n, total);
	}
	printf("�հ�: %d, n: %d\n", total, n);

	return 0;
}