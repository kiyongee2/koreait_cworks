#include <stdio.h>

int main()
{
	//��� ������
	int a = 99;
	int b = 2;

	/*printf("%d\n", a + b); //101
	printf("%d\n", a - b); //97
	printf("%d\n", a * b); //198
	printf("%.1f\n", (float)a / b); //49.5 - ������
	printf("%d\n", a / b); //49 - ��
	printf("%d\n", a % b); //1 - ������

	//1 ���ϱ�
	//��ġ ���� - ���߿� ó����
	printf("%d\n", a++); //99
	//a = a + 1;
	printf("%d\n", a);  //100

	//��ġ ����
	printf("%d\n", ++a);  //101
	printf("%d\n", a);  //101 */

	//�� ������
	int x = 5, y = 3, z = 2;
	printf("%d\n", x > y); //1(��)
	printf("%d\n", x < y); //0(����)
	printf("%d\n", x == y); //0(����)
	printf("%d\n", x != y); //1(��)

	/*
		�� ������
		&& - �� ������ ��� ���� ��� �� : true(1) && true(1) - ��
		|| - �� ������ �ϳ��� ���̾ �� : false(0) || false(0) -> ����
		! - �� ����(�� ������ ���̸� �����̰�, �����̸� ��)
	*/
	printf("%d\n", (x > y) && (y == z)); // 1 && 0 -> 0
	printf("%d\n", (x > y) || (y == z)); // 1 || 0 -> 1
	printf("%d\n", !(x > y)); // !1 -> 0
	

	//���� ������ - (����) ? ��(1) : ����(0)
	int value;  //���ڸ� ������ ����
	int fatherAge = 44;
	int motherAge = 47;
	char result; //���ڸ� ������ ���� ����

	//���ǽ� ����
	value = (3 > 4) ? 10 : 20;
	result = (fatherAge > motherAge) ? 'T' : 'F';

	printf("%d\n", value);  //20
	printf("%c\n", result);  //F

	//���밪 ����
	int n = -4;
	int result2;
	                       
	result2 = (n < 0) ? -n : n;
	printf("%d\n", result2); //4

	printf("=== ���մ��� ������ ===\n");
	int val = 10;

	val += 3; //val = val + 3;
	printf("%d\n", val);  //13

	val -= 3; //val = val - 3;
	printf("%d\n", val); //10

	val *= 3; //val = val * 3;
	printf("%d\n", val); //30

	val /= 3; //val = val / 3;
	printf("%d\n", val); //10

	return 0;
}