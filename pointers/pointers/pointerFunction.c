#include <stdio.h>

void swap(int* a, int* b) { //a=&x, b=&y
	int temp; //���� ����(�� ����� �Ҹ�)
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	//�� ��ȯ
	int x = 1, y = 2;

	swap(&x, &y);
	printf("x = %d, y = %d", x, y);

	/*
	int num = 10;
	int* p;
	p = &num; //num�� �ּ� ����
	*p = 20;
	printf("%d\n", *p); //������(�� Ȯ��), 20
	printf("%d\n", num); //20
	*/

	return 0;
}