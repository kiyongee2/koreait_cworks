#include <stdio.h>
#include <stdlib.h>
/*
    ������ �Է� �޾Ƽ� ��� ���
	- �迭�� ũ�� �Է�
	- ���� �Է�

*/
int main()
{
	int len; //�迭�� ũ��
	int* p;  //���� �Ҵ��� ���� ������
	int i, sum = 0, max;  //�ݺ� ����, �հ�, �ְ� ����
	float avg;  //���

	printf("*** ���� ��� ��� ***\n");
	printf("�Է��� ������ ����: ");
	scanf_s("%d", &len);

	p = (int*)malloc(sizeof(int) * len); //�޸� ����
	if (p == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	//���� �Է�
	for (i = 0; i < len; i++) {
		printf("%d��° ����: ", i + 1);
		scanf_s("%d", &p[i]);
	}

	//�հ�
	max = p[0]; //�ִ밪 �ʱ�ȭ ����
	for (i = 0; i < len; i++) {
		sum += p[i]; //sum = sum + p[i];
		if (max < p[i])  //�ִ밪 ��
			max = p[i];
	}
	printf("�հ�: %d\n", sum);

	//��� ���
	avg = (float)sum / len;
	printf("���: %.1f\n", avg);
	printf("�ְ� ����: %d\n", max);

	//���
	/*for (i = 0; i < len; i++) {
		printf("%d\n", p[i]);
	}*/

	free(p);  //�޸� ����

	return 0;
}