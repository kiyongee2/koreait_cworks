#include <stdio.h>
/*
   ���� ������ ���� �ֱ�
   - main()�Լ� �����̳� �� ���ʿ��� ������
   - ������ ���� ���� �Ǵ� ������
   - ���α׷��� ����Ǹ� �޸𸮿��� �Ҹ���
*/
int x = 1; //���� ����(global variable)

int add10(); //�Լ� �����
int main()
{
	printf("%d\n", add10());  //11
	printf("%d\n", x);  //11

	return 0;
}

//� ���� 10�� ���ϴ� �Լ�
int add10() {
	x = x + 10;
	return x;
}