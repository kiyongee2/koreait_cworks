#include <stdio.h>

int main()
{
	//�ڷ��� ��ȯ
	//�ڵ� ����ȯ
	int iNum = 20;
	float fNum = iNum;  //ū �ڷ��� = ���� �ڷ���

	printf("%d\n", iNum); //20
	printf("%.1f\n", fNum); //20.0

	//���� ����ȯ - cast(�Ұ�ȣ�� ������)
	//�Ǽ����ε� ���������� ��ȯ
	double dNum = 2.54;
	int iNum2 = (int)dNum; //������ ������ ������ �ڷ��� ����

	printf("%d\n", iNum2);

	//������ �� ����
	dNum = 1.2;
	fNum = 0.9F;

	iNum = (int)dNum + (int)fNum; //1+0 = 1
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum);    //(int)(2.1) = 2
	printf("%d\n", iNum);

	printf("=== ������ �� ��ȯ ===\n");
	int x = 10;
	int y = 20;
	int temp;    //�ӽ� ����

	printf("=== ��ȯ �� ===\n");
	printf("x = %d, y = %d\n", x, y);

	//��ȯ �۾�
	temp = x;  //'=' - ���Կ�����
	x = y;
	y = temp;

	printf("=== ��ȯ �� ===\n");
	printf("x = %d, y = %d\n", x, y);

	return 0;
}