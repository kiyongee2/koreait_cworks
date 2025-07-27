#include <stdio.h>
#include <time.h>
#include <Windows.h> //Sleep()

int main()
{
	//���� �ð� �˾ƺ���
	time_t now;

	now = time(NULL); //NULL - ����ִٴ� �ǹ��� �ڷ���

	printf("%ld��\n", now); //1970. 1. 1 ���� ���� �ð� ����
	printf("%ld��\n", now / (24 * 60 * 60)); //1970. 1. 1 ���� ���� �ð� ����

	//���� �ð� ����
	/*time_t start, end;

	start = time(NULL);  //���� �ð�

	// 1 ~ 10 ���(0.5�� ���)
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  //1000 - 1��
	}

	end = time(NULL); //���� �ð�
	printf("%ld��\n", (end - start));*/

	//������ �ð� ����
	clock_t start, end;
	double elapsedTime;  //�ҿ� �ð�

	start = clock();  //���� �ð�
	// 1 ~ 10 ���(0.5�� ���)
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  //1000 - 1��
	}
	end = clock();  //���� �ð�
	//CLOCKS_PER_SEC - �ʴ� �ð� ��ȯ ���
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;

	printf("%.2lf��\n", elapsedTime);

	return 0;
}