#include <stdio.h>

void callByVal(int n);
void callByRef(int* p);
int main()
{
	int num = 10;

	puts("===== ���� ���� ȣ�� =====");
	callByVal(num); //11
	printf("%d\n", num);  //10

	puts("===== �ּҿ� ���� ȣ�� =====");
	callByRef(&num); //11
	printf("%d\n", num); //11

	return 0;
}

void callByVal(int n) {
	n++;  //1����

	//�Լ� ȣ���� n�� 11�� ����ϰ� �޸𸮿��� �Ҹ��
	printf("%d\n", n);
}

void callByRef(int* p) {
	*p += 1; //*p = *p + 1;
	printf("%d\n", *p);
}