#include <stdio.h>
#include <math.h>

//���� ���� ���̺귯�� �Լ� ���
int main()
{
	//���밪 - abs()
	printf("%d\n", abs(-6));

	//�ݿø� - round()
	printf("%.1lf\n", round(2.54)); //3.0
	printf("%.lf\n", round(2.54)); //3
	printf("%.1lf\n", round(2.14)); //2.0

	//���� - floor()
	printf("%.1lf\n", floor(2.54)); //2.0

	//�ø� - ceil()
	printf("%.1lf\n", ceil(2.14)); //3.0

	//�ŵ����� - pow()
	printf("%.1lf\n", pow(2, 4)); //16.0
	printf("%.lf\n", pow(2, 4)); //16.0

	//������ - sqrt()
	printf("%.lf\n", sqrt(16)); //4

	return 0;
}