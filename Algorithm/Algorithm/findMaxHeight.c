#include <stdio.h>
#include <stdlib.h> //malloc(), free()
/*
    ����� Ű�� �Է¹޾� �ִ밪 ���ϱ�
*/
//findMax(�迭, �迭�� ũ��)
float findMax(float a[], int n) {
	float max = a[0]; //ù ����� �ִ밪
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int main()
{
	int number;  //�����
	float* height; //Ű�� ������ �迭 - ���� �Ҵ�

	printf("����� �Է�: ");
	scanf_s("%d", &number);

	//�޸� ����(malloc()) ���
	height = (float*)malloc(sizeof(float) * number);
	if (height == NULL) {
		puts("�޸� �Ҵ翡 �����߽��ϴ�.\n");
		return 1;
	}

	//Ű �Է� �ޱ�
	printf("%d���� Ű�� �Է��ϼ���\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d]= ", i);
		scanf_s("%f", &height[i]);
	}

	//�ִ밪 ã�� �Լ� ȣ��
	printf("�ִ밪�� %.1f�Դϴ�.\n", findMax(height, number));

	//�޸� ����
	free(height);

	return 0;
}