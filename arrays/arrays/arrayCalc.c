#include <stdio.h>
/*
   �迭�� ����
   - �հ�, ���, ����
*/
int main()
{
	int num[4] = { 1, 2, 3, 4 };
	int sum = 0; //�հ踦 ������ ����
	int i;  //�ݺ� ����
	float avg;  //����� ������ ����

	//printf("%d\n", num[0] + num[1]); //3
	//
	/*sum = sum + num[0];  //0 + 1, sum=1
	sum = sum + num[1];  //1 + 2, sum=3
	sum = sum + num[2];  //3 + 3, sum=6
	sum = sum + num[3];  //6 + 4, sum=10*/

	for (i = 0; i < 4; i++) {
		sum = sum + num[i];
	}
	//��� = �հ� / ����
	avg = (float)sum / 4; //����� �����̹Ƿ� sum�� �Ǽ������� ��ȯ��

	printf("�հ�: %d\n", sum);
	printf("���: %.1f\n", avg);


	return 0;
}